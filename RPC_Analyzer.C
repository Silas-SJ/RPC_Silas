////////------------------- Instruction for running this analysis script-----------/////////////
/*
# How to find the dataset?
After loggin into your lxplus account you can find the dataset here:
/eos/cms/store/group/dpg_muon/MuonDPGNtuples/validation//MuDPGNtuple_nanoAOD_Run2033A_Express_900GeV_20230419.root

# How to run this analysis code?
.L RPC_Analyzer.C
RPC_Analyzer()

# What is the out put?
After running this analysis you can see a dataset output called "RPC_out.root". Here you will find all histograms created in analysis code "RPC_Analyzer.C". You may also find some histograms in png format.
*/


#include "TROOT.h"
#include <TFile.h>
#include "TCanvas.h"
#include <TH1.h>
#include <TTreeReader.h>
#include <TTreeReaderValue.h>
#include <TTreeReaderArray.h>
#include <vector>
#include <iostream>
#include <map>
#include <cmath>

bool CheckValue(ROOT::Internal::TTreeReaderValueBase& value) {
   if (value.GetSetupStatus() < 0) {
      std::cerr << "Error " << value.GetSetupStatus()
                << "setting up reader for " << value.GetBranchName() << '\n';
      return false;
   }
   return true;
}
void RPC_Analyzer() {
  gStyle->SetOptStat(1110); // Histograms unnamed stat box
   // Open data set file
  TFile *dataset = TFile::Open("/eos/cms/store/group/dpg_muon/MuonDPGNtuples/validation//MuDPGNtuple_nanoAOD_Run2033A_Express_900GeV_20230419.root");
  
  // Read histogram from dataset
  TTreeReader reader("Events", dataset);
  
  TTreeReaderArray<int> nMuon(reader, "nmuon"); 
  TTreeReaderArray<int> n_rpcRecHit(reader, "nrpcRecHit");
  TTreeReaderArray<Char_t> n_rpcRecHit_clusterSize(reader, "rpcRecHit_clusterSize");
  TTreeReaderValue<UInt_t> Run_number(reader, "run"); 
  TTreeReaderArray<float> mu_eta{reader, "muon_eta"};
  TTreeReaderArray<float> mu_pt{reader, "muon_pt"};
  
 /// Create a output file to seve histograms 
  TFile out("RPC_out.root", "RECREATE");
  
  /// A usual way of declaring histograms
  std::map<std::string, TH1 *> hist;
  
  hist["n_RecHit"] = new TH1F("n_RecHit", "RecHits", 35, 0.0, 35.0);
  hist["n_RecHit"]->GetXaxis()->SetTitle("Number of hits");
  hist["n_RecHit"]->GetYaxis()->SetTitle("Entries");  
  
  hist["n_RecHit_Barrel"] = new TH1F("n_RecHit_barrel", "RecHits per barrel", 35, 0.0, 35.0);
  hist["n_RecHit_Barrel"]->GetXaxis()->SetTitle("Number of hits per barrel");
  hist["n_RecHit_Barrel"]->GetYaxis()->SetTitle("Entries"); 
  
  hist["n_RecHit_Endcap"] = new TH1F("n_RecHit_Endcap", "RecHits per endcap", 35, 0.0, 35.0);
  hist["n_RecHit_Endcap"]->GetXaxis()->SetTitle("Number of hits per endcap station");
  hist["n_RecHit_Endcap"]->GetYaxis()->SetTitle("Entries");   
  
  hist["n_RecHit_clusterSize"] = new TH1F("n_RecHit_cluster_Size", "Cluster Size", 70, 0.0, 70.0);
  hist["n_RecHit_clusterSize"]->GetXaxis()->SetTitle("Cluster Size");
  hist["n_RecHit_clusterSize"]->GetYaxis()->SetTitle("Entries"); 
  
  hist["n_RecHit_clusterSize_Barrel"] = new TH1F("cluster_Size_Barrel", "Cluster Size per barrel", 22, 0.0, 22.0);
  hist["n_RecHit_clusterSize_Barrel"]->GetXaxis()->SetTitle("Cluster Size per barrel");
  hist["n_RecHit_clusterSize_Barrel"]->GetYaxis()->SetTitle("Entries"); 
  
  hist["n_RecHit_clusterSize_Endcap"] = new TH1F("cluster_Size_Endcap", "Cluster Size per endcap station", 22, 0.0, 22.0);
  hist["n_RecHit_clusterSize_Endcap"]->GetXaxis()->SetTitle("Cluster Size per endcap station");
  hist["n_RecHit_clusterSize_Endcap"]->GetYaxis()->SetTitle("Entries"); 
  
  hist["run_n"] = new TH1F("run_n", "Run Number", 2000, 365000, 367000);
  
  
  bool firstEntry = true;
  // These cuts can be change according to the detector configuration.
  const double Max_eta_barrel = 1.2; // η max absolute value in barrel.
  const double Min_eta_barrel = 0; //η Min absolute value
  const double Min_pt_barrel = 20; // pt min value in barrel [GeV/c].
  const double Max_eta_endcap = 2.4; // η max absolute value in Endcap.
  const double Min_eta_endcap = 1.2; // η min absolute value in Endcap.
  const double Min_pt_endcap = 20; // pt min absolute value in barrel [GeV/c].
  
  while (reader.Next()) {
     // std::cout << "Event: " << reader.GetCurrentEntry() << std::endl;
        if (firstEntry) {
           if (!CheckValue(nMuon)) return false;
           if (!CheckValue(n_rpcRecHit)) return false;
           if (!CheckValue(n_rpcRecHit_clusterSize)) return false;
           if (!CheckValue(Run_number)) return false;
           if (!CheckValue(mu_eta)) return false;
           if (!CheckValue(mu_pt)) return false;
           
           firstEntry = false;
        }
        
        int number_muon = nMuon[0]; // Number of muons' entries

         //Loop on number of muons
        for(std::size_t n_i =0; n_i<number_muon; ++n_i){ 
           // Select muons in barrel in fuction of eta and pt
           if( std::abs(mu_eta[n_i]) > Min_eta_barrel &&  std::abs(mu_eta[n_i]) < Max_eta_barrel && mu_pt[n_i]>Min_pt_barrel){
             hist["n_RecHit_clusterSize_Barrel"]->Fill(n_rpcRecHit_clusterSize[n_i]);
             hist["n_RecHit_Barrel"]->Fill(n_rpcRecHit[n_i]); 
           }
           // Select muons in endcap station
           if( std::abs(mu_eta[n_i]) > Min_eta_endcap &&  std::abs(mu_eta[n_i])< Max_eta_endcap && mu_pt[n_i]>Min_pt_endcap){
              hist["n_RecHit_clusterSize_Endcap"]->Fill(n_rpcRecHit_clusterSize[n_i]);
              hist["n_RecHit_Endcap"]->Fill(n_rpcRecHit[n_i]); 
           }
           hist["n_RecHit"]->Fill(n_rpcRecHit[n_i]); 
           hist["n_RecHit_clusterSize"]->Fill(n_rpcRecHit_clusterSize[n_i]);
           hist["run_n"]->Fill(*Run_number);
           
        } /// End of Loop on number of muons
   } /// End of while (reader.Next())
      
   
 /// Oly use it for save useful histograms in png format, for example:     
  auto c1 = new TCanvas("c1", "");
       c1-> SetLogy();
       hist["n_RecHit"]->Draw();
       c1->SaveAs("n_RecHit.png");
       hist["n_RecHit_clusterSize"]->Draw();
       c1->SaveAs("clusterSize.png");
       hist["n_RecHit_Barrel"]->Draw();
       c1->SaveAs("n_RecHit_barrel.png");
       hist["n_RecHit_Endcap"]->Draw();
       c1->SaveAs("n_RecHit_endcap.png");
       hist["n_RecHit_clusterSize_Barrel"]->Draw();
       c1->SaveAs("clusterSize_barrel.png");
       hist["n_RecHit_clusterSize_Endcap"]->Draw();
       c1->SaveAs("clusterSize_endcap.png");
 /// Writing all histograms
  out.Write(); 
  out.Close(); 
 

}


