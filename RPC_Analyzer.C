#define RPC_Analyzer_cxx
#include "RPC_Analyzer.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void RPC_Analyzer::Loop()
{
//   In a ROOT session, you can do:
//      root> .L RPC_Analyzer.C
//      root> RPC_Analyzer t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
   if (fChain == 0) return;
   //Create a output.roo file with histograms 
  TFile output("RPC_output.root", "RECREATE");
/// Run number associated with this dataset is 367553
   /// Declaring histograms for analysis
   hist["h_Wheel0_RB1in_BX"] = new TH1F("h_Wheel0_RB1in_BX", "Number of Bunch Crossing per Event", 8, -4, 4);
   hist["h_Wheel0_RB1in_BX"]->GetXaxis()->SetTitle("Bunch Crossing");
   hist["h_Wheel0_RB1in_BX"]->GetYaxis()->SetTitle("Entries"); 
   
   hist["h_Wheel0_RB1in"] = new TH1F("h_Wheel0_RB1in", "Number of RecHits per Event", 15, 0, 15);
   hist["h_Wheel0_RB1in"]->GetXaxis()->SetTitle("Number of RecHits");
   hist["h_Wheel0_RB1in"]->GetYaxis()->SetTitle("Entries");
   
   hist["h_Wheel0_RB1out_BX"] = new TH1F("h_Wheel0_RB1out_BX", "Number of Bunch Crossing per Event", 8, -4, 4);
   hist["h_Wheel0_RB1out_BX"]->GetXaxis()->SetTitle("Bunch Crossing");
   hist["h_Wheel0_RB1out_BX"]->GetYaxis()->SetTitle("Entries"); 
   
   hist["h_Wheel0_RB1out"] = new TH1F("h_Wheel0_RB1out", "Number of RecHits per Event", 15, 0, 15);
   hist["h_Wheel0_RB1out"]->GetXaxis()->SetTitle("Number of RecHits");
   hist["h_Wheel0_RB1out"]->GetYaxis()->SetTitle("Entries");

   hist["h_Ring2_Chamber"] = new TH1F("h_Ring1_Chamber", "Number of RecHits per Event", 12, 0, 12);
   hist["h_Ring2_Chamber"]->GetXaxis()->SetTitle("Number of RecHits");
   hist["h_Ring2_Chamber"]->GetYaxis()->SetTitle("Entries");
   
   hist["h_Ring2_Chamber2"] = new TH1F("h_Ring1_Chamber2", "Number of RecHits per Event", 12, 0, 12);
   hist["h_Ring2_Chamber3"] = new TH1F("h_Ring1_Chamber3", "Number of RecHits per Event", 12, 0, 12);
   hist["h_Ring2_Chamber4"] = new TH1F("h_Ring1_Chamber4", "Number of RecHits per Event", 12, 0, 12);
   hist["h_Ring2_Chamber5"] = new TH1F("h_Ring1_Chamber5", "Number of RecHits per Event", 12, 0, 12);
   hist["h_Ring2_Chamber6"] = new TH1F("h_Ring1_Chamber6", "Number of RecHits per Event", 12, 0, 12);
   
   hist["h_Ring2_Chamber_BX"] = new TH1F("h_Ring2_Chamber_BX", "Number of Bunch Crossing per Event", 8, -4, 4);
   hist["h_Ring2_Chamber_BX2"] = new TH1F("h_Ring2_Chamber_BX2", "Number of Bunch Crossing per Event", 8, -4, 4);
   hist["h_Ring2_Chamber_BX3"] = new TH1F("h_Ring2_Chamber_BX3", "Number of Bunch Crossing per Event", 8, -4, 4);
   hist["h_Ring2_Chamber_BX4"] = new TH1F("h_Ring2_Chamber_BX4", "Number of Bunch Crossing per Event", 8, -4, 4);
   hist["h_Ring2_Chamber_BX5"] = new TH1F("h_Ring2_Chamber_BX5", "Number of Bunch Crossing per Event", 8, -4, 4);
   hist["h_Ring2_Chamber_BX6"] = new TH1F("h_Ring2_Chamber_BX6", "Number of Bunch Crossing per Event", 8, -4, 4);

   hist["h_Ring2_Chamber_BX"]->GetXaxis()->SetTitle("Bunch Crossing");
   hist["h_Ring2_Chamber_BX"]->GetYaxis()->SetTitle("Entries");
   
   hist["h_Ring2_RollA"] = new TH1F("h_Ring2_RollA", "Number of RecHits per Event", 10, 0.0, 10);
   hist["h_Ring2_RollA"]->GetXaxis()->SetTitle("Number of RecHits");
   hist["h_Ring2_RollA"]->GetYaxis()->SetTitle("Entries");
   hist["h_Ring2_RollB"] = new TH1F("h_Ring2_RollB", "Number of RecHits per Event", 10, 0.0, 10);
   hist["h_Ring2_RollC"] = new TH1F("h_Ring2_RollC", "Number of RecHits per Event", 10, 0.0, 10);
   
   hist["h_Ring2_RollA_BX"] = new TH1F("h_Ring2_RollA_BX", "Number of Bunch Crossing per Event", 8, -4, 4);
   hist["h_Ring2_RollA_BX"]->GetXaxis()->SetTitle("Bunch Crossing");
   hist["h_Ring2_RollA_BX"]->GetYaxis()->SetTitle("Entries");
   hist["h_Ring2_RollB_BX"] = new TH1F("h_Ring2_RollB_BX", "Number of Bunch Crossing per Event", 8, -4, 4);
   hist["h_Ring2_RollC_BX"] = new TH1F("h_Ring2_RollC_BX", "Number of Bunch Crossing per Event", 8, -4, 4);
   

   Long64_t nentries = fChain->GetEntriesFast();

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;
//// RecHits condition and loop over all Hits per event on the differents detector's regions/////
      if(nrpcRecHit>0){
         int rechit_number = 0;
         int rechit_number_BX = 0;
         for(int i = 0; i < nrpcRecHit; i++){
            if(int(rpcRecHit_region[i]) == 0){
             //Barrel
              if(int(rpcRecHit_ring[i]) == 0 && int(rpcRecHit_station[i]) == 1 && int(rpcRecHit_sector[i]) == 1){ //Wheel0_RB1_S01
                if(int(rpcRecHit_layer[i]) == 1){//in
                   rechit_number++;
                   if(rechit_number>0){
                     hist["h_Wheel0_RB1in_BX"]->Fill(int(rpcRecHit_bx[i]));
                     hist["h_Wheel0_RB1in"]->Fill(rechit_number);
                   }
                }else{//out
                    rechit_number++;
                    if(rechit_number>0){
                      hist["h_Wheel0_RB1out_BX"]->Fill(int(rpcRecHit_bx[i]));
                      hist["h_Wheel0_RB1out"]->Fill(rechit_number);
                    }  
                }
              } //End of Wheel0_RB1_S01
            }//End of barrel 
          else{///Endcap region
              if(int(rpcRecHit_region[i]) == 1){///Endcap +
                if(int(rpcRecHit_station[i]) == 1 && int(rpcRecHit_ring[i]) == 2){
                // Disk1,Ring2
                  if(int(rpcRecHit_subsector[i]) == 1) {//Chamber 1
                     rechit_number++;
                     hist["h_Ring2_Chamber"]->Fill(rechit_number);
                     hist["h_Ring2_Chamber_BX"]->Fill(int(rpcRecHit_bx[i]));
                 }else if(int(rpcRecHit_subsector[i]) == 2) {//Chamber 2
                    rechit_number++;
                    hist["h_Ring2_Chamber2"]->Fill(rechit_number);
                    hist["h_Ring2_Chamber_BX2"]->Fill(int(rpcRecHit_bx[i]));
                 }else if(int(rpcRecHit_subsector[i]) == 3) {//Chamber 3
                    rechit_number++;
                    hist["h_Ring2_Chamber3"]->Fill(rechit_number);
                    hist["h_Ring2_Chamber_BX3"]->Fill(int(rpcRecHit_bx[i]));
                 }else if(int(rpcRecHit_subsector[i]) == 4) {//Chamber 4
                    rechit_number++;
                    hist["h_Ring2_Chamber4"]->Fill(rechit_number);
                    hist["h_Ring2_Chamber_BX4"]->Fill(int(rpcRecHit_bx[i]));
                 }else if(int(rpcRecHit_subsector[i]) == 5) {//Chamber 5
                    rechit_number++;
                    hist["h_Ring2_Chamber5"]->Fill(rechit_number);
                    hist["h_Ring2_Chamber_BX5"]->Fill(int(rpcRecHit_bx[i]));
                 }else if(int(rpcRecHit_subsector[i]) == 6) {//Chamber 6
                    rechit_number++;
                    hist["h_Ring2_Chamber6"]->Fill(rechit_number);
                    hist["h_Ring2_Chamber_BX6"]->Fill(int(rpcRecHit_bx[i]));
                 }
               }//End of Disk1,Ring2
              }//End of Encap+
              if(int(rpcRecHit_region[i]) == -1){///Endcap -
                if(int(rpcRecHit_station[i]) == 1 && int(rpcRecHit_ring[i]) == 2){
                // Disk1,Ring2
                  if(int(rpcRecHit_subsector[i]) == 1) {//Chamber 1
                     rechit_number++;
                     if(rechit_number>0){
                        hist["h_Ring2_Chamber"]->Fill(rechit_number);
                        hist["h_Ring2_Chamber_BX"]->Fill(int(rpcRecHit_bx[i]));
                        if (int(rpcRecHit_roll[i]) == 1) {//Roll A
                           hist["h_Ring2_RollA"]->Fill(rechit_number);
                           hist["h_Ring2_RollA_BX"]->Fill(int(rpcRecHit_bx[i]));
                        }else if(int(rpcRecHit_roll[i]) == 2){//Roll B
                           hist["h_Ring2_RollB"]->Fill(rechit_number);
                           hist["h_Ring2_RollB_BX"]->Fill(int(rpcRecHit_bx[i]));
                        }else { //Roll C
                           hist["h_Ring2_RollC"]->Fill(rechit_number);
                           hist["h_Ring2_RollC_BX"]->Fill(int(rpcRecHit_bx[i]));
                        }
                     }      
                 }else if(int(rpcRecHit_subsector[i]) == 2) {//Chamber 2
                    rechit_number++;
                    if(rechit_number>0){
                    hist["h_Ring2_Chamber2"]->Fill(rechit_number);
                    hist["h_Ring2_Chamber_BX2"]->Fill(int(rpcRecHit_bx[i]));
                    }
                 }else if(int(rpcRecHit_subsector[i]) == 3) {//Chamber 3
                    rechit_number++;
                    if(rechit_number>0){
                    hist["h_Ring2_Chamber3"]->Fill(rechit_number);
                    hist["h_Ring2_Chamber_BX3"]->Fill(int(rpcRecHit_bx[i]));
                    }
                 }else if(int(rpcRecHit_subsector[i]) == 4) {//Chamber 4
                    rechit_number++;
                    if(rechit_number>0){
                    hist["h_Ring2_Chamber4"]->Fill(rechit_number);
                    hist["h_Ring2_Chamber_BX4"]->Fill(int(rpcRecHit_bx[i]));
                    }
                 }else if(int(rpcRecHit_subsector[i]) == 5) {//Chamber 5
                    rechit_number++;
                    if(rechit_number>0){
                    hist["h_Ring2_Chamber5"]->Fill(rechit_number);
                    hist["h_Ring2_Chamber_BX5"]->Fill(int(rpcRecHit_bx[i]));
                    }
                 }else if(int(rpcRecHit_subsector[i]) == 6) {//Chamber 6
                    rechit_number++;
                    if(rechit_number>0){
                    hist["h_Ring2_Chamber6"]->Fill(rechit_number);
                    hist["h_Ring2_Chamber_BX6"]->Fill(int(rpcRecHit_bx[i]));
                    }
                 }
               }//End of Disk1,Ring2
              }//End of Encap-
          }///End of Endcap's cut 
         }//End rpcRecHit's loop 
        } //End of rpcRecHit's
        
     } //End of all events 
   
  //auto c1 = new TCanvas("c1", "");
  TCanvas *c1 = new TCanvas("c1", "c1", 800, 600);
  //gStyle->SetOptStat(0);
   gStyle->SetOptStat(1110);
   
   hist["h_Wheel0_RB1in_BX"]->Draw();
   hist["h_Wheel0_RB1out_BX"]->Draw();
   hist["h_Wheel0_RB1in"]->Draw();
   hist["h_Wheel0_RB1out"]->Draw();
   
   hist["h_Ring2_Chamber"]->Draw();
   hist["h_Ring2_Chamber_BX"]->Draw();
   hist["h_Ring2_RollA"]->Draw();
   hist["h_Ring2_RollB"]->Draw();
   hist["h_Ring2_RollC"]->Draw();
   hist["h_Ring2_RollA_BX"]->Draw();
   hist["h_Ring2_RollB_BX"]->Draw();
   hist["h_Ring2_RollC_BX"]->Draw();
   
   hist["h_Ring2_Chamber2"]->Draw();
   hist["h_Ring2_Chamber_BX2"]->Draw();
   hist["h_Ring2_Chamber3"]->Draw();
   hist["h_Ring2_Chamber_BX3"]->Draw();
   hist["h_Ring2_Chamber4"]->Draw();
   hist["h_Ring2_Chamber_BX4"]->Draw();
   hist["h_Ring2_Chamber5"]->Draw();
   hist["h_Ring2_Chamber_BX5"]->Draw();
   hist["h_Ring2_Chamber6"]->Draw();
   hist["h_Ring2_Chamber_BX6"]->Draw();

  

  /// Writing all histograms
  output.Write(); 
  output.Close(); 
   
 //// For CMS preliminary tag It's here an example:
 /*
  TLatex* texCms = new TLatex(0.10,0.93, "#scale[1.0]{RPC Endcap (-)  Events vs BXDistribution}");
// TLatex* texCms = new TLatex(0.10,0.93, "#scale[1.0]{RPC barrel - Events vs NumberOfClusters}");
  texCms->SetNDC();
  texCms->SetTextAlign(12);
  texCms->SetTextSize(0.04);
  texCms->SetTextFont(42);
  texCms->Draw("same");
  //TLatex* texCol = new TLatex(0.45,0.93, Form("%s #sqrt{s} = 900 GeV","pp"));
  TLatex* texCol = new TLatex(0.45,0.93, " (13.6 TeV)");
  texCol->SetNDC();
  texCol->SetTextAlign(32);
  texCol->SetTextSize(0.04);
  texCol->SetTextFont(42);
  texCol->Draw("same");
  TLatex* tex;
  TLatex* tex2;
  TLatex* tex3;
  tex = new TLatex(0.22,0.78,"#scale[1.2]{#bf{CMS}} #it{Preliminary}");
  tex->SetNDC();
  tex->SetTextFont(42);
  tex->SetTextSize(0.04);
  tex->SetLineWidth(2);
  tex->Draw("same");
  tex2 = new TLatex(0.22,0.58, "Run(367553) 2023C pp data");
  tex2->SetNDC();
  tex2->SetTextFont(42);
  tex2->SetTextSize(0.04);
  tex2->SetLineWidth(2);
  tex2->Draw("same");
//  tex3 = new TLatex(0.22,0.38,"W+0_RB1in_S01");
 // tex3 = new TLatex(0.22,0.38,"W+0_RB1out_S01");
  tex3 = new TLatex(0.22,0.38,"RE-1_R2_CH01");
  tex3->SetNDC();
  tex3->SetTextFont(42);
  tex3->SetTextSize(0.04);
  tex3->SetLineWidth(2);
  tex3->Draw("same");
  */
   
   
   
   
   
   
}
