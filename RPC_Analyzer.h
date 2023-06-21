//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Mon Jun 19 19:51:02 2023 by ROOT version 6.24/06
// from TTree Events/Events
// found on file: nano_mu_RAW2DIGI_NANO_ZMu_Run2023C_v2.root
//////////////////////////////////////////////////////////

#ifndef RPC_Analyzer_h
#define RPC_Analyzer_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class RPC_Analyzer {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   UInt_t          run;
   UInt_t          luminosityBlock;
   ULong64_t       event;
   UInt_t          bunchCrossing;
   Int_t           ndtDigi;
   Char_t          dtDigi_wire[1003];   //[ndtDigi]
   Char_t          dtDigi_layer[1003];   //[ndtDigi]
   Char_t          dtDigi_sector[1003];   //[ndtDigi]
   Char_t          dtDigi_station[1003];   //[ndtDigi]
   Char_t          dtDigi_superLayer[1003];   //[ndtDigi]
   Char_t          dtDigi_wheel[1003];   //[ndtDigi]
   Float_t         dtDigi_time[1003];   //[ndtDigi]
   Int_t           ndtSegment;
   Char_t          dtSegment_seg2D_phi_nHits[158];   //[ndtSegment]
   Char_t          dtSegment_seg2D_z_nHits[158];   //[ndtSegment]
   Char_t          dtSegment_sector[158];   //[ndtSegment]
   Char_t          dtSegment_station[158];   //[ndtSegment]
   Char_t          dtSegment_wheel[158];   //[ndtSegment]
   Bool_t          dtSegment_seg4D_hasPhi[158];   //[ndtSegment]
   Bool_t          dtSegment_seg4D_hasZed[158];   //[ndtSegment]
   Float_t         dtSegment_seg2D_phi_normChi2[158];   //[ndtSegment]
   Float_t         dtSegment_seg2D_phi_t0[158];   //[ndtSegment]
   Float_t         dtSegment_seg2D_phi_vDrift[158];   //[ndtSegment]
   Float_t         dtSegment_seg2D_z_normChi2[158];   //[ndtSegment]
   Float_t         dtSegment_seg2D_z_t0[158];   //[ndtSegment]
   Float_t         dtSegment_seg4D_dirLoc_x[158];   //[ndtSegment]
   Float_t         dtSegment_seg4D_dirLoc_y[158];   //[ndtSegment]
   Float_t         dtSegment_seg4D_dirLoc_z[158];   //[ndtSegment]
   Float_t         dtSegment_seg4D_posLoc_x[158];   //[ndtSegment]
   Float_t         dtSegment_seg4D_posLoc_y[158];   //[ndtSegment]
   Float_t         dtSegment_seg4D_posLoc_z[158];   //[ndtSegment]
   Float_t         dtSegment_seg4D_posGlb_eta[158];   //[ndtSegment]
   Float_t         dtSegment_seg4D_posGlb_phi[158];   //[ndtSegment]
   Float_t         dtSegment_seg4D_dirGlb_eta[158];   //[ndtSegment]
   Float_t         dtSegment_seg4D_dirGlb_phi[158];   //[ndtSegment]
   Int_t           ngemDigi;
   Char_t          gemDigi_bx[30717];   //[ngemDigi]
   Char_t          gemDigi_strip[30717];   //[ngemDigi]
   Char_t          gemDigi_chamber[30717];   //[ngemDigi]
   Char_t          gemDigi_layer[30717];   //[ngemDigi]
   Char_t          gemDigi_region[30717];   //[ngemDigi]
   Char_t          gemDigi_roll[30717];   //[ngemDigi]
   Char_t          gemDigi_station[30717];   //[ngemDigi]
   Int_t           ngemRecHit;
   Char_t          gemRecHit_clusterSize[8356];   //[ngemRecHit]
   Char_t          gemRecHit_firstClusterStrip[8356];   //[ngemRecHit]
   Char_t          gemRecHit_chamber[8356];   //[ngemRecHit]
   Char_t          gemRecHit_layer[8356];   //[ngemRecHit]
   Char_t          gemRecHit_region[8356];   //[ngemRecHit]
   Char_t          gemRecHit_roll[8356];   //[ngemRecHit]
   Int_t           gemRecHit_bx[8356];   //[ngemRecHit]
   Float_t         gemRecHit_loc_phi[8356];   //[ngemRecHit]
   Float_t         gemRecHit_loc_x[8356];   //[ngemRecHit]
   Float_t         gemRecHit_loc_y[8356];   //[ngemRecHit]
   Float_t         gemRecHit_loc_z[8356];   //[ngemRecHit]
   Float_t         gemRecHit_g_phi[8356];   //[ngemRecHit]
   Float_t         gemRecHit_g_r[8356];   //[ngemRecHit]
   Float_t         gemRecHit_g_x[8356];   //[ngemRecHit]
   Float_t         gemRecHit_g_y[8356];   //[ngemRecHit]
   Float_t         gemRecHit_g_z[8356];   //[ngemRecHit]
   Int_t           ngemSegment;
   Char_t          gemSegment_chamber[1001];   //[ngemSegment]
   Char_t          gemSegment_region[1001];   //[ngemSegment]
   Char_t          gemSegment_ring[1001];   //[ngemSegment]
   Char_t          gemSegment_station[1001];   //[ngemSegment]
   Int_t           gemSegment_bx[1001];   //[ngemSegment]
   Int_t           gemSegment_chi2[1001];   //[ngemSegment]
   Float_t         gemSegment_dirLoc_x[1001];   //[ngemSegment]
   Float_t         gemSegment_dirLoc_y[1001];   //[ngemSegment]
   Float_t         gemSegment_dirLoc_z[1001];   //[ngemSegment]
   Float_t         gemSegment_posLoc_x[1001];   //[ngemSegment]
   Float_t         gemSegment_posLoc_y[1001];   //[ngemSegment]
   Float_t         gemSegment_posLoc_z[1001];   //[ngemSegment]
   Float_t         gemSegment_posGlb_eta[1001];   //[ngemSegment]
   Float_t         gemSegment_posGlb_phi[1001];   //[ngemSegment]
   Float_t         gemSegment_posGlb_x[1001];   //[ngemSegment]
   Float_t         gemSegment_posGlb_y[1001];   //[ngemSegment]
   Float_t         gemSegment_posGlb_z[1001];   //[ngemSegment]
   Float_t         gemSegment_dirGlb_eta[1001];   //[ngemSegment]
   Float_t         gemSegment_dirGlb_phi[1001];   //[ngemSegment]
   Int_t           ngemOHStatus;
   Char_t          gemOHStatus_chamber[140];   //[ngemOHStatus]
   Char_t          gemOHStatus_layer[140];   //[ngemOHStatus]
   Char_t          gemOHStatus_region[140];   //[ngemOHStatus]
   Char_t          gemOHStatus_station[140];   //[ngemOHStatus]
   UShort_t        gemOHStatus_errors[140];   //[ngemOHStatus]
   UShort_t        gemOHStatus_warnings[140];   //[ngemOHStatus]
   Int_t           gemOHStatus_chamberType[140];   //[ngemOHStatus]
   UInt_t          gemOHStatus_missingVFATs[140];   //[ngemOHStatus]
   UInt_t          gemOHStatus_vfatMask[140];   //[ngemOHStatus]
   UInt_t          gemOHStatus_zsMask[140];   //[ngemOHStatus]
   Int_t           nltBmtfIn;
   Char_t          ltBmtfIn_wheel[19];   //[nltBmtfIn]
   Char_t          ltBmtfIn_sector[19];   //[nltBmtfIn]
   Char_t          ltBmtfIn_station[19];   //[nltBmtfIn]
   Char_t          ltBmtfIn_quality[19];   //[nltBmtfIn]
   Char_t          ltBmtfIn_bx[19];   //[nltBmtfIn]
   Char_t          ltBmtfIn_is2nd[19];   //[nltBmtfIn]
   Int_t           ltBmtfIn_phi[19];   //[nltBmtfIn]
   Int_t           ltBmtfIn_phiB[19];   //[nltBmtfIn]
   Float_t         ltBmtfIn_posLoc_x[19];   //[nltBmtfIn]
   Float_t         ltBmtfIn_dirLoc_phi[19];   //[nltBmtfIn]
   Int_t           nltBmtfInTh;
   Char_t          ltBmtfInTh_wheel[22];   //[nltBmtfInTh]
   Char_t          ltBmtfInTh_sector[22];   //[nltBmtfInTh]
   Char_t          ltBmtfInTh_station[22];   //[nltBmtfInTh]
   Char_t          ltBmtfInTh_bx[22];   //[nltBmtfInTh]
   UInt_t          ltBmtfInTh_hitMap[22];   //[nltBmtfInTh]
   Int_t           ncscTnP;
   Bool_t          cscTnP_muonTrigger[3];   //[ncscTnP]
   Int_t           cscTnP_muonCharge[3];   //[ncscTnP]
   Int_t           cscTnP_muonTrkHits[3];   //[ncscTnP]
   Int_t           cscTnP_trackCharge[3];   //[ncscTnP]
   Int_t           cscTnP_trackTrkHits[3];   //[ncscTnP]
   Int_t           cscTnP_chamberEndcap[3];   //[ncscTnP]
   Int_t           cscTnP_chamberRing1[3];   //[ncscTnP]
   Int_t           cscTnP_chamberRing2[3];   //[ncscTnP]
   Int_t           cscTnP_chamberRing3[3];   //[ncscTnP]
   Int_t           cscTnP_chamberRing4[3];   //[ncscTnP]
   Int_t           cscTnP_chamberChamber1[3];   //[ncscTnP]
   Int_t           cscTnP_chamberChamber2[3];   //[ncscTnP]
   Int_t           cscTnP_chamberChamber3[3];   //[ncscTnP]
   Int_t           cscTnP_chamberChamber4[3];   //[ncscTnP]
   Int_t           cscTnP_chamberLayer1[3];   //[ncscTnP]
   Int_t           cscTnP_chamberLayer2[3];   //[ncscTnP]
   Int_t           cscTnP_chamberLayer3[3];   //[ncscTnP]
   Int_t           cscTnP_chamberLayer4[3];   //[ncscTnP]
   Float_t         cscTnP_muonPt[3];   //[ncscTnP]
   Float_t         cscTnP_muonPhi[3];   //[ncscTnP]
   Float_t         cscTnP_muonEta[3];   //[ncscTnP]
   Float_t         cscTnP_muonPtError[3];   //[ncscTnP]
   Float_t         cscTnP_muonPhiError[3];   //[ncscTnP]
   Float_t         cscTnP_muonEtaError[3];   //[ncscTnP]
   Float_t         cscTnP_muonDXY[3];   //[ncscTnP]
   Float_t         cscTnP_muonDZ[3];   //[ncscTnP]
   Float_t         cscTnP_muonChi2[3];   //[ncscTnP]
   Float_t         cscTnP_muonIso[3];   //[ncscTnP]
   Float_t         cscTnP_trackPt[3];   //[ncscTnP]
   Float_t         cscTnP_trackP[3];   //[ncscTnP]
   Float_t         cscTnP_trackPhi[3];   //[ncscTnP]
   Float_t         cscTnP_trackEta[3];   //[ncscTnP]
   Float_t         cscTnP_trackPtError[3];   //[ncscTnP]
   Float_t         cscTnP_trackPhiError[3];   //[ncscTnP]
   Float_t         cscTnP_trackEtaError[3];   //[ncscTnP]
   Float_t         cscTnP_trackDXY[3];   //[ncscTnP]
   Float_t         cscTnP_trackDZ[3];   //[ncscTnP]
   Float_t         cscTnP_trackChi2[3];   //[ncscTnP]
   Float_t         cscTnP_trackIso[3];   //[ncscTnP]
   Float_t         cscTnP_zMass[3];   //[ncscTnP]
   Float_t         cscTnP_dRTrackMuon[3];   //[ncscTnP]
   Float_t         cscTnP_numberOfPrimaryVertidies[3];   //[ncscTnP]
   Float_t         cscTnP_ttIntLocalX1[3];   //[ncscTnP]
   Float_t         cscTnP_ttIntLocalX2[3];   //[ncscTnP]
   Float_t         cscTnP_ttIntLocalX3[3];   //[ncscTnP]
   Float_t         cscTnP_ttIntLocalX4[3];   //[ncscTnP]
   Float_t         cscTnP_ttIntLocalY1[3];   //[ncscTnP]
   Float_t         cscTnP_ttIntLocalY2[3];   //[ncscTnP]
   Float_t         cscTnP_ttIntLocalY3[3];   //[ncscTnP]
   Float_t         cscTnP_ttIntLocalY4[3];   //[ncscTnP]
   Float_t         cscTnP_ttIntLocalErrorX1[3];   //[ncscTnP]
   Float_t         cscTnP_ttIntLocalErrorX2[3];   //[ncscTnP]
   Float_t         cscTnP_ttIntLocalErrorX3[3];   //[ncscTnP]
   Float_t         cscTnP_ttIntLocalErrorX4[3];   //[ncscTnP]
   Float_t         cscTnP_ttIntLocalErrorY1[3];   //[ncscTnP]
   Float_t         cscTnP_ttIntLocalErrorY2[3];   //[ncscTnP]
   Float_t         cscTnP_ttIntLocalErrorY3[3];   //[ncscTnP]
   Float_t         cscTnP_ttIntLocalErrorY4[3];   //[ncscTnP]
   Float_t         cscTnP_ttIntLocalW1[3];   //[ncscTnP]
   Float_t         cscTnP_ttIntLocalW2[3];   //[ncscTnP]
   Float_t         cscTnP_ttIntLocalW3[3];   //[ncscTnP]
   Float_t         cscTnP_ttIntLocalW4[3];   //[ncscTnP]
   Float_t         cscTnP_ttIntLocalS1[3];   //[ncscTnP]
   Float_t         cscTnP_ttIntLocalS2[3];   //[ncscTnP]
   Float_t         cscTnP_ttIntLocalS3[3];   //[ncscTnP]
   Float_t         cscTnP_ttIntLocalS4[3];   //[ncscTnP]
   Float_t         cscTnP_ttIntEta1[3];   //[ncscTnP]
   Float_t         cscTnP_ttIntEta2[3];   //[ncscTnP]
   Float_t         cscTnP_ttIntEta3[3];   //[ncscTnP]
   Float_t         cscTnP_ttIntEta4[3];   //[ncscTnP]
   Float_t         cscTnP_ttDistToEdge1[3];   //[ncscTnP]
   Float_t         cscTnP_ttDistToEdge2[3];   //[ncscTnP]
   Float_t         cscTnP_ttDistToEdge3[3];   //[ncscTnP]
   Float_t         cscTnP_ttDistToEdge4[3];   //[ncscTnP]
   Float_t         cscTnP_ttDistToHVGap1[3];   //[ncscTnP]
   Float_t         cscTnP_ttDistToHVGap2[3];   //[ncscTnP]
   Float_t         cscTnP_ttDistToHVGap3[3];   //[ncscTnP]
   Float_t         cscTnP_ttDistToHVGap4[3];   //[ncscTnP]
   Float_t         cscTnP_segLocalX1[3];   //[ncscTnP]
   Float_t         cscTnP_segLocalX2[3];   //[ncscTnP]
   Float_t         cscTnP_segLocalX3[3];   //[ncscTnP]
   Float_t         cscTnP_segLocalX4[3];   //[ncscTnP]
   Float_t         cscTnP_segLocalY1[3];   //[ncscTnP]
   Float_t         cscTnP_segLocalY2[3];   //[ncscTnP]
   Float_t         cscTnP_segLocalY3[3];   //[ncscTnP]
   Float_t         cscTnP_segLocalY4[3];   //[ncscTnP]
   Float_t         cscTnP_segLocalErrorX1[3];   //[ncscTnP]
   Float_t         cscTnP_segLocalErrorX2[3];   //[ncscTnP]
   Float_t         cscTnP_segLocalErrorX3[3];   //[ncscTnP]
   Float_t         cscTnP_segLocalErrorX4[3];   //[ncscTnP]
   Float_t         cscTnP_segLocalErrorY1[3];   //[ncscTnP]
   Float_t         cscTnP_segLocalErrorY2[3];   //[ncscTnP]
   Float_t         cscTnP_segLocalErrorY3[3];   //[ncscTnP]
   Float_t         cscTnP_segLocalErrorY4[3];   //[ncscTnP]
   Float_t         cscTnP_ttIntSegResidualLocalX1[3];   //[ncscTnP]
   Float_t         cscTnP_ttIntSegResidualLocalX2[3];   //[ncscTnP]
   Float_t         cscTnP_ttIntSegResidualLocalX3[3];   //[ncscTnP]
   Float_t         cscTnP_ttIntSegResidualLocalX4[3];   //[ncscTnP]
   Float_t         cscTnP_ttIntSegResidualLocalY1[3];   //[ncscTnP]
   Float_t         cscTnP_ttIntSegResidualLocalY2[3];   //[ncscTnP]
   Float_t         cscTnP_ttIntSegResidualLocalY3[3];   //[ncscTnP]
   Float_t         cscTnP_ttIntSegResidualLocalY4[3];   //[ncscTnP]
   Int_t           nmuon_matches;
   Char_t          muon_matches_wheel[38];   //[nmuon_matches]
   Char_t          muon_matches_sector[38];   //[nmuon_matches]
   Char_t          muon_matches_station[38];   //[nmuon_matches]
   Float_t         muon_matches_x[38];   //[nmuon_matches]
   Float_t         muon_matches_y[38];   //[nmuon_matches]
   Float_t         muon_matches_phi[38];   //[nmuon_matches]
   Float_t         muon_matches_eta[38];   //[nmuon_matches]
   Float_t         muon_matches_dXdZ[38];   //[nmuon_matches]
   Float_t         muon_matches_dYdZ[38];   //[nmuon_matches]
   Int_t           nmuon_staMatches;
   UInt_t          muon_staMatches_MuSegIdx[17];   //[nmuon_staMatches]
   Int_t           ndtSegment_extr;
   Char_t          dtSegment_extr_ExpWire[1896];   //[ndtSegment_extr]
   Float_t         dtSegment_extr_ExpPos[1896];   //[ndtSegment_extr]
   Float_t         dtSegment_extr_ExpPosCh[1896];   //[ndtSegment_extr]
   Int_t           ndtSegment_hits;
   Char_t          dtSegment_hits_side[1272];   //[ndtSegment_hits]
   Char_t          dtSegment_hits_wire[1272];   //[ndtSegment_hits]
   Char_t          dtSegment_hits_wirePos[1272];   //[ndtSegment_hits]
   Char_t          dtSegment_hits_layer[1272];   //[ndtSegment_hits]
   Char_t          dtSegment_hits_superLayer[1272];   //[ndtSegment_hits]
   Float_t         dtSegment_hits_pos[1272];   //[ndtSegment_hits]
   Float_t         dtSegment_hits_posCh[1272];   //[ndtSegment_hits]
   Float_t         dtSegment_hits_posErr[1272];   //[ndtSegment_hits]
   Float_t         dtSegment_hits_time[1272];   //[ndtSegment_hits]
   Float_t         dtSegment_hits_timeCali[1272];   //[ndtSegment_hits]
   Int_t           nmuon_propagated;
   Char_t          muon_propagated_propagated_nME1hits[11];   //[nmuon_propagated]
   Char_t          muon_propagated_propagated_nME2hits[11];   //[nmuon_propagated]
   Char_t          muon_propagated_propagated_nME3hits[11];   //[nmuon_propagated]
   Char_t          muon_propagated_propagated_nME4hits[11];   //[nmuon_propagated]
   Char_t          muon_propagated_propagated_region[11];   //[nmuon_propagated]
   Char_t          muon_propagated_propagated_layer[11];   //[nmuon_propagated]
   Char_t          muon_propagated_propagated_chamber[11];   //[nmuon_propagated]
   Char_t          muon_propagated_propagated_etaP[11];   //[nmuon_propagated]
   Bool_t          muon_propagated_propagated_isincoming[11];   //[nmuon_propagated]
   Bool_t          muon_propagated_propagated_isinsideout[11];   //[nmuon_propagated]
   UInt_t          muon_propagated_propagated_muIdx[11];   //[nmuon_propagated]
   Float_t         muon_propagated_propagatedLoc_x[11];   //[nmuon_propagated]
   Float_t         muon_propagated_propagatedLoc_y[11];   //[nmuon_propagated]
   Float_t         muon_propagated_propagatedLoc_z[11];   //[nmuon_propagated]
   Float_t         muon_propagated_propagatedLoc_r[11];   //[nmuon_propagated]
   Float_t         muon_propagated_propagatedLoc_phi[11];   //[nmuon_propagated]
   Float_t         muon_propagated_propagatedLoc_dirX[11];   //[nmuon_propagated]
   Float_t         muon_propagated_propagatedLoc_dirY[11];   //[nmuon_propagated]
   Float_t         muon_propagated_propagatedLoc_dirZ[11];   //[nmuon_propagated]
   Float_t         muon_propagated_propagatedLoc_errX[11];   //[nmuon_propagated]
   Float_t         muon_propagated_propagatedLoc_errY[11];   //[nmuon_propagated]
   Float_t         muon_propagated_propagatedGlb_x[11];   //[nmuon_propagated]
   Float_t         muon_propagated_propagatedGlb_y[11];   //[nmuon_propagated]
   Float_t         muon_propagated_propagatedGlb_z[11];   //[nmuon_propagated]
   Float_t         muon_propagated_propagatedGlb_r[11];   //[nmuon_propagated]
   Float_t         muon_propagated_propagatedGlb_phi[11];   //[nmuon_propagated]
   Float_t         muon_propagated_propagatedGlb_errX[11];   //[nmuon_propagated]
   Float_t         muon_propagated_propagatedGlb_errY[11];   //[nmuon_propagated]
   Float_t         muon_propagated_propagatedGlb_rerr[11];   //[nmuon_propagated]
   Float_t         muon_propagated_propagatedGlb_phierr[11];   //[nmuon_propagated]
   Float_t         muon_propagated_propagated_EtaPartition_centerX[11];   //[nmuon_propagated]
   Float_t         muon_propagated_propagated_EtaPartition_centerY[11];   //[nmuon_propagated]
   Float_t         muon_propagated_propagated_EtaPartition_phiMax[11];   //[nmuon_propagated]
   Float_t         muon_propagated_propagated_EtaPartition_phiMin[11];   //[nmuon_propagated]
   Float_t         muon_propagated_propagated_EtaPartition_rMax[11];   //[nmuon_propagated]
   Float_t         muon_propagated_propagated_EtaPartition_rMin[11];   //[nmuon_propagated]
   Int_t           nltTwinMuxIn;
   Char_t          ltTwinMuxIn_wheel[22];   //[nltTwinMuxIn]
   Char_t          ltTwinMuxIn_sector[22];   //[nltTwinMuxIn]
   Char_t          ltTwinMuxIn_station[22];   //[nltTwinMuxIn]
   Char_t          ltTwinMuxIn_quality[22];   //[nltTwinMuxIn]
   Char_t          ltTwinMuxIn_bx[22];   //[nltTwinMuxIn]
   Char_t          ltTwinMuxIn_is2nd[22];   //[nltTwinMuxIn]
   Int_t           ltTwinMuxIn_phi[22];   //[nltTwinMuxIn]
   Int_t           ltTwinMuxIn_phiB[22];   //[nltTwinMuxIn]
   Float_t         ltTwinMuxIn_posLoc_x[22];   //[nltTwinMuxIn]
   Float_t         ltTwinMuxIn_dirLoc_phi[22];   //[nltTwinMuxIn]
   Int_t           nltTwinMuxInTh;
   Char_t          ltTwinMuxInTh_wheel[36];   //[nltTwinMuxInTh]
   Char_t          ltTwinMuxInTh_sector[36];   //[nltTwinMuxInTh]
   Char_t          ltTwinMuxInTh_station[36];   //[nltTwinMuxInTh]
   Char_t          ltTwinMuxInTh_bx[36];   //[nltTwinMuxInTh]
   UInt_t          ltTwinMuxInTh_hitMap[36];   //[nltTwinMuxInTh]
   Int_t           nltTwinMuxOut;
   Char_t          ltTwinMuxOut_wheel[20];   //[nltTwinMuxOut]
   Char_t          ltTwinMuxOut_sector[20];   //[nltTwinMuxOut]
   Char_t          ltTwinMuxOut_station[20];   //[nltTwinMuxOut]
   Char_t          ltTwinMuxOut_quality[20];   //[nltTwinMuxOut]
   Char_t          ltTwinMuxOut_rpcBit[20];   //[nltTwinMuxOut]
   Char_t          ltTwinMuxOut_bx[20];   //[nltTwinMuxOut]
   Char_t          ltTwinMuxOut_is2nd[20];   //[nltTwinMuxOut]
   Int_t           ltTwinMuxOut_phi[20];   //[nltTwinMuxOut]
   Int_t           ltTwinMuxOut_phiB[20];   //[nltTwinMuxOut]
   Float_t         ltTwinMuxOut_posLoc_x[20];   //[nltTwinMuxOut]
   Float_t         ltTwinMuxOut_dirLoc_phi[20];   //[nltTwinMuxOut]
   Int_t           nmuon;
   Char_t          muon_rpcMu_numberOfMatchedRPCLayers[30];   //[nmuon]
   Char_t          muon_staMu_numberOfValidMuonHits[30];   //[nmuon]
   Char_t          muon_trkMu_numberOfMatchedStations[30];   //[nmuon]
   Char_t          muon_trk_algo[30];   //[nmuon]
   Char_t          muon_trk_numberOfValidPixelHits[30];   //[nmuon]
   Char_t          muon_trk_numberOfValidTrackerLayers[30];   //[nmuon]
   Char_t          muon_trk_origAlgo[30];   //[nmuon]
   Char_t          muon_trk_validFraction[30];   //[nmuon]
   Bool_t          muon_isGEM[30];   //[nmuon]
   Bool_t          muon_isGlobal[30];   //[nmuon]
   Bool_t          muon_isLoose[30];   //[nmuon]
   Bool_t          muon_isMedium[30];   //[nmuon]
   Bool_t          muon_isRPC[30];   //[nmuon]
   Bool_t          muon_isStandalone[30];   //[nmuon]
   Bool_t          muon_isTight[30];   //[nmuon]
   Bool_t          muon_isTracker[30];   //[nmuon]
   UChar_t         muon_trkMu_stationMask[30];   //[nmuon]
   Int_t           muon_charge[30];   //[nmuon]
   Int_t           muon_pdgId[30];   //[nmuon]
   Float_t         muon_eta[30];   //[nmuon]
   Float_t         muon_glbMu_normChi2[30];   //[nmuon]
   Float_t         muon_mass[30];   //[nmuon]
   Float_t         muon_pfIso04[30];   //[nmuon]
   Float_t         muon_phi[30];   //[nmuon]
   Float_t         muon_pt[30];   //[nmuon]
   Float_t         muon_staMu_normChi2[30];   //[nmuon]
   Float_t         muon_trkIso03[30];   //[nmuon]
   Float_t         muon_trk_dxy[30];   //[nmuon]
   Float_t         muon_trk_dz[30];   //[nmuon]
   Int_t           nrpcDigi;
   Char_t          rpcDigi_layer[299];   //[nrpcDigi]
   Char_t          rpcDigi_region[299];   //[nrpcDigi]
   Char_t          rpcDigi_ring[299];   //[nrpcDigi]
   Char_t          rpcDigi_roll[299];   //[nrpcDigi]
   Char_t          rpcDigi_sector[299];   //[nrpcDigi]
   Char_t          rpcDigi_station[299];   //[nrpcDigi]
   Char_t          rpcDigi_subsector[299];   //[nrpcDigi]
   UChar_t         rpcDigi_strip[299];   //[nrpcDigi]
   Int_t           rpcDigi_bx[299];   //[nrpcDigi]
   UInt_t          rpcDigi_rawId[299];   //[nrpcDigi]
   Int_t           nrpcRecHit;
   Char_t          rpcRecHit_clusterSize[86];   //[nrpcRecHit]
   Char_t          rpcRecHit_firstClusterStrip[86];   //[nrpcRecHit]
   Char_t          rpcRecHit_layer[86];   //[nrpcRecHit]
   Char_t          rpcRecHit_region[86];   //[nrpcRecHit]
   Char_t          rpcRecHit_ring[86];   //[nrpcRecHit]
   Char_t          rpcRecHit_roll[86];   //[nrpcRecHit]
   Char_t          rpcRecHit_sector[86];   //[nrpcRecHit]
   Char_t          rpcRecHit_station[86];   //[nrpcRecHit]
   Char_t          rpcRecHit_subsector[86];   //[nrpcRecHit]
   Int_t           rpcRecHit_bx[86];   //[nrpcRecHit]
   UInt_t          rpcRecHit_rawId[86];   //[nrpcRecHit]
   Float_t         rpcRecHit_coordX[86];   //[nrpcRecHit]
   Float_t         rpcRecHit_coordY[86];   //[nrpcRecHit]
   Float_t         rpcRecHit_coordZ[86];   //[nrpcRecHit]
   Float_t         rpcRecHit_time[86];   //[nrpcRecHit]
   Bool_t          muon_firesIsoTrig[30];   //[nmuon]
   Bool_t          muon_firesTrig[30];   //[nmuon]
   Int_t           muon_nMatches[30];   //[nmuon]
   Int_t           muon_staMu_nMatchSeg[30];   //[nmuon]
   UInt_t          muon_matches_begin[30];   //[nmuon]
   UInt_t          muon_matches_end[30];   //[nmuon]
   UInt_t          muon_staMatches_begin[30];   //[nmuon]
   UInt_t          muon_staMatches_end[30];   //[nmuon]
   UInt_t          dtSegment_seg2D_hits_begin[158];   //[ndtSegment]
   UInt_t          dtSegment_seg2D_hits_end[158];   //[ndtSegment]
   UInt_t          dtSegment_seg4D_extr_begin[158];   //[ndtSegment]
   UInt_t          dtSegment_seg4D_extr_end[158];   //[ndtSegment]
   Float_t         dtSegment_seg4D_posLoc_x_SL1[158];   //[ndtSegment]
   Float_t         dtSegment_seg4D_posLoc_x_SL3[158];   //[ndtSegment]
   Float_t         dtSegment_seg4D_posLoc_x_midPlane[158];   //[ndtSegment]
   Float_t         muon_innermost_x[30];   //[nmuon]
   Float_t         muon_innermost_y[30];   //[nmuon]
   Float_t         muon_innermost_z[30];   //[nmuon]
   Float_t         muon_outermost_x[30];   //[nmuon]
   Float_t         muon_outermost_y[30];   //[nmuon]
   Float_t         muon_outermost_z[30];   //[nmuon]
   
   std::map<std::string, TH1 *> hist;
   
   

   // List of branches
   TBranch        *b_run;   //!
   TBranch        *b_luminosityBlock;   //!
   TBranch        *b_event;   //!
   TBranch        *b_bunchCrossing;   //!
   TBranch        *b_ndtDigi;   //!
   TBranch        *b_dtDigi_wire;   //!
   TBranch        *b_dtDigi_layer;   //!
   TBranch        *b_dtDigi_sector;   //!
   TBranch        *b_dtDigi_station;   //!
   TBranch        *b_dtDigi_superLayer;   //!
   TBranch        *b_dtDigi_wheel;   //!
   TBranch        *b_dtDigi_time;   //!
   TBranch        *b_ndtSegment;   //!
   TBranch        *b_dtSegment_seg2D_phi_nHits;   //!
   TBranch        *b_dtSegment_seg2D_z_nHits;   //!
   TBranch        *b_dtSegment_sector;   //!
   TBranch        *b_dtSegment_station;   //!
   TBranch        *b_dtSegment_wheel;   //!
   TBranch        *b_dtSegment_seg4D_hasPhi;   //!
   TBranch        *b_dtSegment_seg4D_hasZed;   //!
   TBranch        *b_dtSegment_seg2D_phi_normChi2;   //!
   TBranch        *b_dtSegment_seg2D_phi_t0;   //!
   TBranch        *b_dtSegment_seg2D_phi_vDrift;   //!
   TBranch        *b_dtSegment_seg2D_z_normChi2;   //!
   TBranch        *b_dtSegment_seg2D_z_t0;   //!
   TBranch        *b_dtSegment_seg4D_dirLoc_x;   //!
   TBranch        *b_dtSegment_seg4D_dirLoc_y;   //!
   TBranch        *b_dtSegment_seg4D_dirLoc_z;   //!
   TBranch        *b_dtSegment_seg4D_posLoc_x;   //!
   TBranch        *b_dtSegment_seg4D_posLoc_y;   //!
   TBranch        *b_dtSegment_seg4D_posLoc_z;   //!
   TBranch        *b_dtSegment_seg4D_posGlb_eta;   //!
   TBranch        *b_dtSegment_seg4D_posGlb_phi;   //!
   TBranch        *b_dtSegment_seg4D_dirGlb_eta;   //!
   TBranch        *b_dtSegment_seg4D_dirGlb_phi;   //!
   TBranch        *b_ngemDigi;   //!
   TBranch        *b_gemDigi_bx;   //!
   TBranch        *b_gemDigi_strip;   //!
   TBranch        *b_gemDigi_chamber;   //!
   TBranch        *b_gemDigi_layer;   //!
   TBranch        *b_gemDigi_region;   //!
   TBranch        *b_gemDigi_roll;   //!
   TBranch        *b_gemDigi_station;   //!
   TBranch        *b_ngemRecHit;   //!
   TBranch        *b_gemRecHit_clusterSize;   //!
   TBranch        *b_gemRecHit_firstClusterStrip;   //!
   TBranch        *b_gemRecHit_chamber;   //!
   TBranch        *b_gemRecHit_layer;   //!
   TBranch        *b_gemRecHit_region;   //!
   TBranch        *b_gemRecHit_roll;   //!
   TBranch        *b_gemRecHit_bx;   //!
   TBranch        *b_gemRecHit_loc_phi;   //!
   TBranch        *b_gemRecHit_loc_x;   //!
   TBranch        *b_gemRecHit_loc_y;   //!
   TBranch        *b_gemRecHit_loc_z;   //!
   TBranch        *b_gemRecHit_g_phi;   //!
   TBranch        *b_gemRecHit_g_r;   //!
   TBranch        *b_gemRecHit_g_x;   //!
   TBranch        *b_gemRecHit_g_y;   //!
   TBranch        *b_gemRecHit_g_z;   //!
   TBranch        *b_ngemSegment;   //!
   TBranch        *b_gemSegment_chamber;   //!
   TBranch        *b_gemSegment_region;   //!
   TBranch        *b_gemSegment_ring;   //!
   TBranch        *b_gemSegment_station;   //!
   TBranch        *b_gemSegment_bx;   //!
   TBranch        *b_gemSegment_chi2;   //!
   TBranch        *b_gemSegment_dirLoc_x;   //!
   TBranch        *b_gemSegment_dirLoc_y;   //!
   TBranch        *b_gemSegment_dirLoc_z;   //!
   TBranch        *b_gemSegment_posLoc_x;   //!
   TBranch        *b_gemSegment_posLoc_y;   //!
   TBranch        *b_gemSegment_posLoc_z;   //!
   TBranch        *b_gemSegment_posGlb_eta;   //!
   TBranch        *b_gemSegment_posGlb_phi;   //!
   TBranch        *b_gemSegment_posGlb_x;   //!
   TBranch        *b_gemSegment_posGlb_y;   //!
   TBranch        *b_gemSegment_posGlb_z;   //!
   TBranch        *b_gemSegment_dirGlb_eta;   //!
   TBranch        *b_gemSegment_dirGlb_phi;   //!
   TBranch        *b_ngemOHStatus;   //!
   TBranch        *b_gemOHStatus_chamber;   //!
   TBranch        *b_gemOHStatus_layer;   //!
   TBranch        *b_gemOHStatus_region;   //!
   TBranch        *b_gemOHStatus_station;   //!
   TBranch        *b_gemOHStatus_errors;   //!
   TBranch        *b_gemOHStatus_warnings;   //!
   TBranch        *b_gemOHStatus_chamberType;   //!
   TBranch        *b_gemOHStatus_missingVFATs;   //!
   TBranch        *b_gemOHStatus_vfatMask;   //!
   TBranch        *b_gemOHStatus_zsMask;   //!
   TBranch        *b_nltBmtfIn;   //!
   TBranch        *b_ltBmtfIn_wheel;   //!
   TBranch        *b_ltBmtfIn_sector;   //!
   TBranch        *b_ltBmtfIn_station;   //!
   TBranch        *b_ltBmtfIn_quality;   //!
   TBranch        *b_ltBmtfIn_bx;   //!
   TBranch        *b_ltBmtfIn_is2nd;   //!
   TBranch        *b_ltBmtfIn_phi;   //!
   TBranch        *b_ltBmtfIn_phiB;   //!
   TBranch        *b_ltBmtfIn_posLoc_x;   //!
   TBranch        *b_ltBmtfIn_dirLoc_phi;   //!
   TBranch        *b_nltBmtfInTh;   //!
   TBranch        *b_ltBmtfInTh_wheel;   //!
   TBranch        *b_ltBmtfInTh_sector;   //!
   TBranch        *b_ltBmtfInTh_station;   //!
   TBranch        *b_ltBmtfInTh_bx;   //!
   TBranch        *b_ltBmtfInTh_hitMap;   //!
   TBranch        *b_ncscTnP;   //!
   TBranch        *b_cscTnP_muonTrigger;   //!
   TBranch        *b_cscTnP_muonCharge;   //!
   TBranch        *b_cscTnP_muonTrkHits;   //!
   TBranch        *b_cscTnP_trackCharge;   //!
   TBranch        *b_cscTnP_trackTrkHits;   //!
   TBranch        *b_cscTnP_chamberEndcap;   //!
   TBranch        *b_cscTnP_chamberRing1;   //!
   TBranch        *b_cscTnP_chamberRing2;   //!
   TBranch        *b_cscTnP_chamberRing3;   //!
   TBranch        *b_cscTnP_chamberRing4;   //!
   TBranch        *b_cscTnP_chamberChamber1;   //!
   TBranch        *b_cscTnP_chamberChamber2;   //!
   TBranch        *b_cscTnP_chamberChamber3;   //!
   TBranch        *b_cscTnP_chamberChamber4;   //!
   TBranch        *b_cscTnP_chamberLayer1;   //!
   TBranch        *b_cscTnP_chamberLayer2;   //!
   TBranch        *b_cscTnP_chamberLayer3;   //!
   TBranch        *b_cscTnP_chamberLayer4;   //!
   TBranch        *b_cscTnP_muonPt;   //!
   TBranch        *b_cscTnP_muonPhi;   //!
   TBranch        *b_cscTnP_muonEta;   //!
   TBranch        *b_cscTnP_muonPtError;   //!
   TBranch        *b_cscTnP_muonPhiError;   //!
   TBranch        *b_cscTnP_muonEtaError;   //!
   TBranch        *b_cscTnP_muonDXY;   //!
   TBranch        *b_cscTnP_muonDZ;   //!
   TBranch        *b_cscTnP_muonChi2;   //!
   TBranch        *b_cscTnP_muonIso;   //!
   TBranch        *b_cscTnP_trackPt;   //!
   TBranch        *b_cscTnP_trackP;   //!
   TBranch        *b_cscTnP_trackPhi;   //!
   TBranch        *b_cscTnP_trackEta;   //!
   TBranch        *b_cscTnP_trackPtError;   //!
   TBranch        *b_cscTnP_trackPhiError;   //!
   TBranch        *b_cscTnP_trackEtaError;   //!
   TBranch        *b_cscTnP_trackDXY;   //!
   TBranch        *b_cscTnP_trackDZ;   //!
   TBranch        *b_cscTnP_trackChi2;   //!
   TBranch        *b_cscTnP_trackIso;   //!
   TBranch        *b_cscTnP_zMass;   //!
   TBranch        *b_cscTnP_dRTrackMuon;   //!
   TBranch        *b_cscTnP_numberOfPrimaryVertidies;   //!
   TBranch        *b_cscTnP_ttIntLocalX1;   //!
   TBranch        *b_cscTnP_ttIntLocalX2;   //!
   TBranch        *b_cscTnP_ttIntLocalX3;   //!
   TBranch        *b_cscTnP_ttIntLocalX4;   //!
   TBranch        *b_cscTnP_ttIntLocalY1;   //!
   TBranch        *b_cscTnP_ttIntLocalY2;   //!
   TBranch        *b_cscTnP_ttIntLocalY3;   //!
   TBranch        *b_cscTnP_ttIntLocalY4;   //!
   TBranch        *b_cscTnP_ttIntLocalErrorX1;   //!
   TBranch        *b_cscTnP_ttIntLocalErrorX2;   //!
   TBranch        *b_cscTnP_ttIntLocalErrorX3;   //!
   TBranch        *b_cscTnP_ttIntLocalErrorX4;   //!
   TBranch        *b_cscTnP_ttIntLocalErrorY1;   //!
   TBranch        *b_cscTnP_ttIntLocalErrorY2;   //!
   TBranch        *b_cscTnP_ttIntLocalErrorY3;   //!
   TBranch        *b_cscTnP_ttIntLocalErrorY4;   //!
   TBranch        *b_cscTnP_ttIntLocalW1;   //!
   TBranch        *b_cscTnP_ttIntLocalW2;   //!
   TBranch        *b_cscTnP_ttIntLocalW3;   //!
   TBranch        *b_cscTnP_ttIntLocalW4;   //!
   TBranch        *b_cscTnP_ttIntLocalS1;   //!
   TBranch        *b_cscTnP_ttIntLocalS2;   //!
   TBranch        *b_cscTnP_ttIntLocalS3;   //!
   TBranch        *b_cscTnP_ttIntLocalS4;   //!
   TBranch        *b_cscTnP_ttIntEta1;   //!
   TBranch        *b_cscTnP_ttIntEta2;   //!
   TBranch        *b_cscTnP_ttIntEta3;   //!
   TBranch        *b_cscTnP_ttIntEta4;   //!
   TBranch        *b_cscTnP_ttDistToEdge1;   //!
   TBranch        *b_cscTnP_ttDistToEdge2;   //!
   TBranch        *b_cscTnP_ttDistToEdge3;   //!
   TBranch        *b_cscTnP_ttDistToEdge4;   //!
   TBranch        *b_cscTnP_ttDistToHVGap1;   //!
   TBranch        *b_cscTnP_ttDistToHVGap2;   //!
   TBranch        *b_cscTnP_ttDistToHVGap3;   //!
   TBranch        *b_cscTnP_ttDistToHVGap4;   //!
   TBranch        *b_cscTnP_segLocalX1;   //!
   TBranch        *b_cscTnP_segLocalX2;   //!
   TBranch        *b_cscTnP_segLocalX3;   //!
   TBranch        *b_cscTnP_segLocalX4;   //!
   TBranch        *b_cscTnP_segLocalY1;   //!
   TBranch        *b_cscTnP_segLocalY2;   //!
   TBranch        *b_cscTnP_segLocalY3;   //!
   TBranch        *b_cscTnP_segLocalY4;   //!
   TBranch        *b_cscTnP_segLocalErrorX1;   //!
   TBranch        *b_cscTnP_segLocalErrorX2;   //!
   TBranch        *b_cscTnP_segLocalErrorX3;   //!
   TBranch        *b_cscTnP_segLocalErrorX4;   //!
   TBranch        *b_cscTnP_segLocalErrorY1;   //!
   TBranch        *b_cscTnP_segLocalErrorY2;   //!
   TBranch        *b_cscTnP_segLocalErrorY3;   //!
   TBranch        *b_cscTnP_segLocalErrorY4;   //!
   TBranch        *b_cscTnP_ttIntSegResidualLocalX1;   //!
   TBranch        *b_cscTnP_ttIntSegResidualLocalX2;   //!
   TBranch        *b_cscTnP_ttIntSegResidualLocalX3;   //!
   TBranch        *b_cscTnP_ttIntSegResidualLocalX4;   //!
   TBranch        *b_cscTnP_ttIntSegResidualLocalY1;   //!
   TBranch        *b_cscTnP_ttIntSegResidualLocalY2;   //!
   TBranch        *b_cscTnP_ttIntSegResidualLocalY3;   //!
   TBranch        *b_cscTnP_ttIntSegResidualLocalY4;   //!
   TBranch        *b_nmuon_matches;   //!
   TBranch        *b_muon_matches_wheel;   //!
   TBranch        *b_muon_matches_sector;   //!
   TBranch        *b_muon_matches_station;   //!
   TBranch        *b_muon_matches_x;   //!
   TBranch        *b_muon_matches_y;   //!
   TBranch        *b_muon_matches_phi;   //!
   TBranch        *b_muon_matches_eta;   //!
   TBranch        *b_muon_matches_dXdZ;   //!
   TBranch        *b_muon_matches_dYdZ;   //!
   TBranch        *b_nmuon_staMatches;   //!
   TBranch        *b_muon_staMatches_MuSegIdx;   //!
   TBranch        *b_ndtSegment_extr;   //!
   TBranch        *b_dtSegment_extr_ExpWire;   //!
   TBranch        *b_dtSegment_extr_ExpPos;   //!
   TBranch        *b_dtSegment_extr_ExpPosCh;   //!
   TBranch        *b_ndtSegment_hits;   //!
   TBranch        *b_dtSegment_hits_side;   //!
   TBranch        *b_dtSegment_hits_wire;   //!
   TBranch        *b_dtSegment_hits_wirePos;   //!
   TBranch        *b_dtSegment_hits_layer;   //!
   TBranch        *b_dtSegment_hits_superLayer;   //!
   TBranch        *b_dtSegment_hits_pos;   //!
   TBranch        *b_dtSegment_hits_posCh;   //!
   TBranch        *b_dtSegment_hits_posErr;   //!
   TBranch        *b_dtSegment_hits_time;   //!
   TBranch        *b_dtSegment_hits_timeCali;   //!
   TBranch        *b_nmuon_propagated;   //!
   TBranch        *b_muon_propagated_propagated_nME1hits;   //!
   TBranch        *b_muon_propagated_propagated_nME2hits;   //!
   TBranch        *b_muon_propagated_propagated_nME3hits;   //!
   TBranch        *b_muon_propagated_propagated_nME4hits;   //!
   TBranch        *b_muon_propagated_propagated_region;   //!
   TBranch        *b_muon_propagated_propagated_layer;   //!
   TBranch        *b_muon_propagated_propagated_chamber;   //!
   TBranch        *b_muon_propagated_propagated_etaP;   //!
   TBranch        *b_muon_propagated_propagated_isincoming;   //!
   TBranch        *b_muon_propagated_propagated_isinsideout;   //!
   TBranch        *b_muon_propagated_propagated_muIdx;   //!
   TBranch        *b_muon_propagated_propagatedLoc_x;   //!
   TBranch        *b_muon_propagated_propagatedLoc_y;   //!
   TBranch        *b_muon_propagated_propagatedLoc_z;   //!
   TBranch        *b_muon_propagated_propagatedLoc_r;   //!
   TBranch        *b_muon_propagated_propagatedLoc_phi;   //!
   TBranch        *b_muon_propagated_propagatedLoc_dirX;   //!
   TBranch        *b_muon_propagated_propagatedLoc_dirY;   //!
   TBranch        *b_muon_propagated_propagatedLoc_dirZ;   //!
   TBranch        *b_muon_propagated_propagatedLoc_errX;   //!
   TBranch        *b_muon_propagated_propagatedLoc_errY;   //!
   TBranch        *b_muon_propagated_propagatedGlb_x;   //!
   TBranch        *b_muon_propagated_propagatedGlb_y;   //!
   TBranch        *b_muon_propagated_propagatedGlb_z;   //!
   TBranch        *b_muon_propagated_propagatedGlb_r;   //!
   TBranch        *b_muon_propagated_propagatedGlb_phi;   //!
   TBranch        *b_muon_propagated_propagatedGlb_errX;   //!
   TBranch        *b_muon_propagated_propagatedGlb_errY;   //!
   TBranch        *b_muon_propagated_propagatedGlb_rerr;   //!
   TBranch        *b_muon_propagated_propagatedGlb_phierr;   //!
   TBranch        *b_muon_propagated_propagated_EtaPartition_centerX;   //!
   TBranch        *b_muon_propagated_propagated_EtaPartition_centerY;   //!
   TBranch        *b_muon_propagated_propagated_EtaPartition_phiMax;   //!
   TBranch        *b_muon_propagated_propagated_EtaPartition_phiMin;   //!
   TBranch        *b_muon_propagated_propagated_EtaPartition_rMax;   //!
   TBranch        *b_muon_propagated_propagated_EtaPartition_rMin;   //!
   TBranch        *b_nltTwinMuxIn;   //!
   TBranch        *b_ltTwinMuxIn_wheel;   //!
   TBranch        *b_ltTwinMuxIn_sector;   //!
   TBranch        *b_ltTwinMuxIn_station;   //!
   TBranch        *b_ltTwinMuxIn_quality;   //!
   TBranch        *b_ltTwinMuxIn_bx;   //!
   TBranch        *b_ltTwinMuxIn_is2nd;   //!
   TBranch        *b_ltTwinMuxIn_phi;   //!
   TBranch        *b_ltTwinMuxIn_phiB;   //!
   TBranch        *b_ltTwinMuxIn_posLoc_x;   //!
   TBranch        *b_ltTwinMuxIn_dirLoc_phi;   //!
   TBranch        *b_nltTwinMuxInTh;   //!
   TBranch        *b_ltTwinMuxInTh_wheel;   //!
   TBranch        *b_ltTwinMuxInTh_sector;   //!
   TBranch        *b_ltTwinMuxInTh_station;   //!
   TBranch        *b_ltTwinMuxInTh_bx;   //!
   TBranch        *b_ltTwinMuxInTh_hitMap;   //!
   TBranch        *b_nltTwinMuxOut;   //!
   TBranch        *b_ltTwinMuxOut_wheel;   //!
   TBranch        *b_ltTwinMuxOut_sector;   //!
   TBranch        *b_ltTwinMuxOut_station;   //!
   TBranch        *b_ltTwinMuxOut_quality;   //!
   TBranch        *b_ltTwinMuxOut_rpcBit;   //!
   TBranch        *b_ltTwinMuxOut_bx;   //!
   TBranch        *b_ltTwinMuxOut_is2nd;   //!
   TBranch        *b_ltTwinMuxOut_phi;   //!
   TBranch        *b_ltTwinMuxOut_phiB;   //!
   TBranch        *b_ltTwinMuxOut_posLoc_x;   //!
   TBranch        *b_ltTwinMuxOut_dirLoc_phi;   //!
   TBranch        *b_nmuon;   //!
   TBranch        *b_muon_rpcMu_numberOfMatchedRPCLayers;   //!
   TBranch        *b_muon_staMu_numberOfValidMuonHits;   //!
   TBranch        *b_muon_trkMu_numberOfMatchedStations;   //!
   TBranch        *b_muon_trk_algo;   //!
   TBranch        *b_muon_trk_numberOfValidPixelHits;   //!
   TBranch        *b_muon_trk_numberOfValidTrackerLayers;   //!
   TBranch        *b_muon_trk_origAlgo;   //!
   TBranch        *b_muon_trk_validFraction;   //!
   TBranch        *b_muon_isGEM;   //!
   TBranch        *b_muon_isGlobal;   //!
   TBranch        *b_muon_isLoose;   //!
   TBranch        *b_muon_isMedium;   //!
   TBranch        *b_muon_isRPC;   //!
   TBranch        *b_muon_isStandalone;   //!
   TBranch        *b_muon_isTight;   //!
   TBranch        *b_muon_isTracker;   //!
   TBranch        *b_muon_trkMu_stationMask;   //!
   TBranch        *b_muon_charge;   //!
   TBranch        *b_muon_pdgId;   //!
   TBranch        *b_muon_eta;   //!
   TBranch        *b_muon_glbMu_normChi2;   //!
   TBranch        *b_muon_mass;   //!
   TBranch        *b_muon_pfIso04;   //!
   TBranch        *b_muon_phi;   //!
   TBranch        *b_muon_pt;   //!
   TBranch        *b_muon_staMu_normChi2;   //!
   TBranch        *b_muon_trkIso03;   //!
   TBranch        *b_muon_trk_dxy;   //!
   TBranch        *b_muon_trk_dz;   //!
   TBranch        *b_nrpcDigi;   //!
   TBranch        *b_rpcDigi_layer;   //!
   TBranch        *b_rpcDigi_region;   //!
   TBranch        *b_rpcDigi_ring;   //!
   TBranch        *b_rpcDigi_roll;   //!
   TBranch        *b_rpcDigi_sector;   //!
   TBranch        *b_rpcDigi_station;   //!
   TBranch        *b_rpcDigi_subsector;   //!
   TBranch        *b_rpcDigi_strip;   //!
   TBranch        *b_rpcDigi_bx;   //!
   TBranch        *b_rpcDigi_rawId;   //!
   TBranch        *b_nrpcRecHit;   //!
   TBranch        *b_rpcRecHit_clusterSize;   //!
   TBranch        *b_rpcRecHit_firstClusterStrip;   //!
   TBranch        *b_rpcRecHit_layer;   //!
   TBranch        *b_rpcRecHit_region;   //!
   TBranch        *b_rpcRecHit_ring;   //!
   TBranch        *b_rpcRecHit_roll;   //!
   TBranch        *b_rpcRecHit_sector;   //!
   TBranch        *b_rpcRecHit_station;   //!
   TBranch        *b_rpcRecHit_subsector;   //!
   TBranch        *b_rpcRecHit_bx;   //!
   TBranch        *b_rpcRecHit_rawId;   //!
   TBranch        *b_rpcRecHit_coordX;   //!
   TBranch        *b_rpcRecHit_coordY;   //!
   TBranch        *b_rpcRecHit_coordZ;   //!
   TBranch        *b_rpcRecHit_time;   //!
   TBranch        *b_muon_firesIsoTrig;   //!
   TBranch        *b_muon_firesTrig;   //!
   TBranch        *b_muon_nMatches;   //!
   TBranch        *b_muon_staMu_nMatchSeg;   //!
   TBranch        *b_muon_matches_begin;   //!
   TBranch        *b_muon_matches_end;   //!
   TBranch        *b_muon_staMatches_begin;   //!
   TBranch        *b_muon_staMatches_end;   //!
   TBranch        *b_dtSegment_seg2D_hits_begin;   //!
   TBranch        *b_dtSegment_seg2D_hits_end;   //!
   TBranch        *b_dtSegment_seg4D_extr_begin;   //!
   TBranch        *b_dtSegment_seg4D_extr_end;   //!
   TBranch        *b_dtSegment_seg4D_posLoc_x_SL1;   //!
   TBranch        *b_dtSegment_seg4D_posLoc_x_SL3;   //!
   TBranch        *b_dtSegment_seg4D_posLoc_x_midPlane;   //!
   TBranch        *b_muon_innermost_x;   //!
   TBranch        *b_muon_innermost_y;   //!
   TBranch        *b_muon_innermost_z;   //!
   TBranch        *b_muon_outermost_x;   //!
   TBranch        *b_muon_outermost_y;   //!
   TBranch        *b_muon_outermost_z;   //!

   RPC_Analyzer(TTree *tree=0);
   virtual ~RPC_Analyzer();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef RPC_Analyzer_cxx
RPC_Analyzer::RPC_Analyzer(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("nano_mu_RAW2DIGI_NANO_ZMu_Run2023C_v2.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("nano_mu_RAW2DIGI_NANO_ZMu_Run2023C_v2.root");
      }
      f->GetObject("Events",tree);

   }
   Init(tree);
}

RPC_Analyzer::~RPC_Analyzer()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t RPC_Analyzer::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t RPC_Analyzer::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void RPC_Analyzer::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("luminosityBlock", &luminosityBlock, &b_luminosityBlock);
   fChain->SetBranchAddress("event", &event, &b_event);
   fChain->SetBranchAddress("bunchCrossing", &bunchCrossing, &b_bunchCrossing);
   fChain->SetBranchAddress("ndtDigi", &ndtDigi, &b_ndtDigi);
   fChain->SetBranchAddress("dtDigi_wire", dtDigi_wire, &b_dtDigi_wire);
   fChain->SetBranchAddress("dtDigi_layer", dtDigi_layer, &b_dtDigi_layer);
   fChain->SetBranchAddress("dtDigi_sector", dtDigi_sector, &b_dtDigi_sector);
   fChain->SetBranchAddress("dtDigi_station", dtDigi_station, &b_dtDigi_station);
   fChain->SetBranchAddress("dtDigi_superLayer", dtDigi_superLayer, &b_dtDigi_superLayer);
   fChain->SetBranchAddress("dtDigi_wheel", dtDigi_wheel, &b_dtDigi_wheel);
   fChain->SetBranchAddress("dtDigi_time", dtDigi_time, &b_dtDigi_time);
   fChain->SetBranchAddress("ndtSegment", &ndtSegment, &b_ndtSegment);
   fChain->SetBranchAddress("dtSegment_seg2D_phi_nHits", dtSegment_seg2D_phi_nHits, &b_dtSegment_seg2D_phi_nHits);
   fChain->SetBranchAddress("dtSegment_seg2D_z_nHits", dtSegment_seg2D_z_nHits, &b_dtSegment_seg2D_z_nHits);
   fChain->SetBranchAddress("dtSegment_sector", dtSegment_sector, &b_dtSegment_sector);
   fChain->SetBranchAddress("dtSegment_station", dtSegment_station, &b_dtSegment_station);
   fChain->SetBranchAddress("dtSegment_wheel", dtSegment_wheel, &b_dtSegment_wheel);
   fChain->SetBranchAddress("dtSegment_seg4D_hasPhi", dtSegment_seg4D_hasPhi, &b_dtSegment_seg4D_hasPhi);
   fChain->SetBranchAddress("dtSegment_seg4D_hasZed", dtSegment_seg4D_hasZed, &b_dtSegment_seg4D_hasZed);
   fChain->SetBranchAddress("dtSegment_seg2D_phi_normChi2", dtSegment_seg2D_phi_normChi2, &b_dtSegment_seg2D_phi_normChi2);
   fChain->SetBranchAddress("dtSegment_seg2D_phi_t0", dtSegment_seg2D_phi_t0, &b_dtSegment_seg2D_phi_t0);
   fChain->SetBranchAddress("dtSegment_seg2D_phi_vDrift", dtSegment_seg2D_phi_vDrift, &b_dtSegment_seg2D_phi_vDrift);
   fChain->SetBranchAddress("dtSegment_seg2D_z_normChi2", dtSegment_seg2D_z_normChi2, &b_dtSegment_seg2D_z_normChi2);
   fChain->SetBranchAddress("dtSegment_seg2D_z_t0", dtSegment_seg2D_z_t0, &b_dtSegment_seg2D_z_t0);
   fChain->SetBranchAddress("dtSegment_seg4D_dirLoc_x", dtSegment_seg4D_dirLoc_x, &b_dtSegment_seg4D_dirLoc_x);
   fChain->SetBranchAddress("dtSegment_seg4D_dirLoc_y", dtSegment_seg4D_dirLoc_y, &b_dtSegment_seg4D_dirLoc_y);
   fChain->SetBranchAddress("dtSegment_seg4D_dirLoc_z", dtSegment_seg4D_dirLoc_z, &b_dtSegment_seg4D_dirLoc_z);
   fChain->SetBranchAddress("dtSegment_seg4D_posLoc_x", dtSegment_seg4D_posLoc_x, &b_dtSegment_seg4D_posLoc_x);
   fChain->SetBranchAddress("dtSegment_seg4D_posLoc_y", dtSegment_seg4D_posLoc_y, &b_dtSegment_seg4D_posLoc_y);
   fChain->SetBranchAddress("dtSegment_seg4D_posLoc_z", dtSegment_seg4D_posLoc_z, &b_dtSegment_seg4D_posLoc_z);
   fChain->SetBranchAddress("dtSegment_seg4D_posGlb_eta", dtSegment_seg4D_posGlb_eta, &b_dtSegment_seg4D_posGlb_eta);
   fChain->SetBranchAddress("dtSegment_seg4D_posGlb_phi", dtSegment_seg4D_posGlb_phi, &b_dtSegment_seg4D_posGlb_phi);
   fChain->SetBranchAddress("dtSegment_seg4D_dirGlb_eta", dtSegment_seg4D_dirGlb_eta, &b_dtSegment_seg4D_dirGlb_eta);
   fChain->SetBranchAddress("dtSegment_seg4D_dirGlb_phi", dtSegment_seg4D_dirGlb_phi, &b_dtSegment_seg4D_dirGlb_phi);
   fChain->SetBranchAddress("ngemDigi", &ngemDigi, &b_ngemDigi);
   fChain->SetBranchAddress("gemDigi_bx", gemDigi_bx, &b_gemDigi_bx);
   fChain->SetBranchAddress("gemDigi_strip", gemDigi_strip, &b_gemDigi_strip);
   fChain->SetBranchAddress("gemDigi_chamber", gemDigi_chamber, &b_gemDigi_chamber);
   fChain->SetBranchAddress("gemDigi_layer", gemDigi_layer, &b_gemDigi_layer);
   fChain->SetBranchAddress("gemDigi_region", gemDigi_region, &b_gemDigi_region);
   fChain->SetBranchAddress("gemDigi_roll", gemDigi_roll, &b_gemDigi_roll);
   fChain->SetBranchAddress("gemDigi_station", gemDigi_station, &b_gemDigi_station);
   fChain->SetBranchAddress("ngemRecHit", &ngemRecHit, &b_ngemRecHit);
   fChain->SetBranchAddress("gemRecHit_clusterSize", gemRecHit_clusterSize, &b_gemRecHit_clusterSize);
   fChain->SetBranchAddress("gemRecHit_firstClusterStrip", gemRecHit_firstClusterStrip, &b_gemRecHit_firstClusterStrip);
   fChain->SetBranchAddress("gemRecHit_chamber", gemRecHit_chamber, &b_gemRecHit_chamber);
   fChain->SetBranchAddress("gemRecHit_layer", gemRecHit_layer, &b_gemRecHit_layer);
   fChain->SetBranchAddress("gemRecHit_region", gemRecHit_region, &b_gemRecHit_region);
   fChain->SetBranchAddress("gemRecHit_roll", gemRecHit_roll, &b_gemRecHit_roll);
   fChain->SetBranchAddress("gemRecHit_bx", gemRecHit_bx, &b_gemRecHit_bx);
   fChain->SetBranchAddress("gemRecHit_loc_phi", gemRecHit_loc_phi, &b_gemRecHit_loc_phi);
   fChain->SetBranchAddress("gemRecHit_loc_x", gemRecHit_loc_x, &b_gemRecHit_loc_x);
   fChain->SetBranchAddress("gemRecHit_loc_y", gemRecHit_loc_y, &b_gemRecHit_loc_y);
   fChain->SetBranchAddress("gemRecHit_loc_z", gemRecHit_loc_z, &b_gemRecHit_loc_z);
   fChain->SetBranchAddress("gemRecHit_g_phi", gemRecHit_g_phi, &b_gemRecHit_g_phi);
   fChain->SetBranchAddress("gemRecHit_g_r", gemRecHit_g_r, &b_gemRecHit_g_r);
   fChain->SetBranchAddress("gemRecHit_g_x", gemRecHit_g_x, &b_gemRecHit_g_x);
   fChain->SetBranchAddress("gemRecHit_g_y", gemRecHit_g_y, &b_gemRecHit_g_y);
   fChain->SetBranchAddress("gemRecHit_g_z", gemRecHit_g_z, &b_gemRecHit_g_z);
   fChain->SetBranchAddress("ngemSegment", &ngemSegment, &b_ngemSegment);
   fChain->SetBranchAddress("gemSegment_chamber", gemSegment_chamber, &b_gemSegment_chamber);
   fChain->SetBranchAddress("gemSegment_region", gemSegment_region, &b_gemSegment_region);
   fChain->SetBranchAddress("gemSegment_ring", gemSegment_ring, &b_gemSegment_ring);
   fChain->SetBranchAddress("gemSegment_station", gemSegment_station, &b_gemSegment_station);
   fChain->SetBranchAddress("gemSegment_bx", gemSegment_bx, &b_gemSegment_bx);
   fChain->SetBranchAddress("gemSegment_chi2", gemSegment_chi2, &b_gemSegment_chi2);
   fChain->SetBranchAddress("gemSegment_dirLoc_x", gemSegment_dirLoc_x, &b_gemSegment_dirLoc_x);
   fChain->SetBranchAddress("gemSegment_dirLoc_y", gemSegment_dirLoc_y, &b_gemSegment_dirLoc_y);
   fChain->SetBranchAddress("gemSegment_dirLoc_z", gemSegment_dirLoc_z, &b_gemSegment_dirLoc_z);
   fChain->SetBranchAddress("gemSegment_posLoc_x", gemSegment_posLoc_x, &b_gemSegment_posLoc_x);
   fChain->SetBranchAddress("gemSegment_posLoc_y", gemSegment_posLoc_y, &b_gemSegment_posLoc_y);
   fChain->SetBranchAddress("gemSegment_posLoc_z", gemSegment_posLoc_z, &b_gemSegment_posLoc_z);
   fChain->SetBranchAddress("gemSegment_posGlb_eta", gemSegment_posGlb_eta, &b_gemSegment_posGlb_eta);
   fChain->SetBranchAddress("gemSegment_posGlb_phi", gemSegment_posGlb_phi, &b_gemSegment_posGlb_phi);
   fChain->SetBranchAddress("gemSegment_posGlb_x", gemSegment_posGlb_x, &b_gemSegment_posGlb_x);
   fChain->SetBranchAddress("gemSegment_posGlb_y", gemSegment_posGlb_y, &b_gemSegment_posGlb_y);
   fChain->SetBranchAddress("gemSegment_posGlb_z", gemSegment_posGlb_z, &b_gemSegment_posGlb_z);
   fChain->SetBranchAddress("gemSegment_dirGlb_eta", gemSegment_dirGlb_eta, &b_gemSegment_dirGlb_eta);
   fChain->SetBranchAddress("gemSegment_dirGlb_phi", gemSegment_dirGlb_phi, &b_gemSegment_dirGlb_phi);
   fChain->SetBranchAddress("ngemOHStatus", &ngemOHStatus, &b_ngemOHStatus);
   fChain->SetBranchAddress("gemOHStatus_chamber", gemOHStatus_chamber, &b_gemOHStatus_chamber);
   fChain->SetBranchAddress("gemOHStatus_layer", gemOHStatus_layer, &b_gemOHStatus_layer);
   fChain->SetBranchAddress("gemOHStatus_region", gemOHStatus_region, &b_gemOHStatus_region);
   fChain->SetBranchAddress("gemOHStatus_station", gemOHStatus_station, &b_gemOHStatus_station);
   fChain->SetBranchAddress("gemOHStatus_errors", gemOHStatus_errors, &b_gemOHStatus_errors);
   fChain->SetBranchAddress("gemOHStatus_warnings", gemOHStatus_warnings, &b_gemOHStatus_warnings);
   fChain->SetBranchAddress("gemOHStatus_chamberType", gemOHStatus_chamberType, &b_gemOHStatus_chamberType);
   fChain->SetBranchAddress("gemOHStatus_missingVFATs", gemOHStatus_missingVFATs, &b_gemOHStatus_missingVFATs);
   fChain->SetBranchAddress("gemOHStatus_vfatMask", gemOHStatus_vfatMask, &b_gemOHStatus_vfatMask);
   fChain->SetBranchAddress("gemOHStatus_zsMask", gemOHStatus_zsMask, &b_gemOHStatus_zsMask);
   fChain->SetBranchAddress("nltBmtfIn", &nltBmtfIn, &b_nltBmtfIn);
   fChain->SetBranchAddress("ltBmtfIn_wheel", ltBmtfIn_wheel, &b_ltBmtfIn_wheel);
   fChain->SetBranchAddress("ltBmtfIn_sector", ltBmtfIn_sector, &b_ltBmtfIn_sector);
   fChain->SetBranchAddress("ltBmtfIn_station", ltBmtfIn_station, &b_ltBmtfIn_station);
   fChain->SetBranchAddress("ltBmtfIn_quality", ltBmtfIn_quality, &b_ltBmtfIn_quality);
   fChain->SetBranchAddress("ltBmtfIn_bx", ltBmtfIn_bx, &b_ltBmtfIn_bx);
   fChain->SetBranchAddress("ltBmtfIn_is2nd", ltBmtfIn_is2nd, &b_ltBmtfIn_is2nd);
   fChain->SetBranchAddress("ltBmtfIn_phi", ltBmtfIn_phi, &b_ltBmtfIn_phi);
   fChain->SetBranchAddress("ltBmtfIn_phiB", ltBmtfIn_phiB, &b_ltBmtfIn_phiB);
   fChain->SetBranchAddress("ltBmtfIn_posLoc_x", ltBmtfIn_posLoc_x, &b_ltBmtfIn_posLoc_x);
   fChain->SetBranchAddress("ltBmtfIn_dirLoc_phi", ltBmtfIn_dirLoc_phi, &b_ltBmtfIn_dirLoc_phi);
   fChain->SetBranchAddress("nltBmtfInTh", &nltBmtfInTh, &b_nltBmtfInTh);
   fChain->SetBranchAddress("ltBmtfInTh_wheel", ltBmtfInTh_wheel, &b_ltBmtfInTh_wheel);
   fChain->SetBranchAddress("ltBmtfInTh_sector", ltBmtfInTh_sector, &b_ltBmtfInTh_sector);
   fChain->SetBranchAddress("ltBmtfInTh_station", ltBmtfInTh_station, &b_ltBmtfInTh_station);
   fChain->SetBranchAddress("ltBmtfInTh_bx", ltBmtfInTh_bx, &b_ltBmtfInTh_bx);
   fChain->SetBranchAddress("ltBmtfInTh_hitMap", ltBmtfInTh_hitMap, &b_ltBmtfInTh_hitMap);
   fChain->SetBranchAddress("ncscTnP", &ncscTnP, &b_ncscTnP);
   fChain->SetBranchAddress("cscTnP_muonTrigger", cscTnP_muonTrigger, &b_cscTnP_muonTrigger);
   fChain->SetBranchAddress("cscTnP_muonCharge", cscTnP_muonCharge, &b_cscTnP_muonCharge);
   fChain->SetBranchAddress("cscTnP_muonTrkHits", cscTnP_muonTrkHits, &b_cscTnP_muonTrkHits);
   fChain->SetBranchAddress("cscTnP_trackCharge", cscTnP_trackCharge, &b_cscTnP_trackCharge);
   fChain->SetBranchAddress("cscTnP_trackTrkHits", cscTnP_trackTrkHits, &b_cscTnP_trackTrkHits);
   fChain->SetBranchAddress("cscTnP_chamberEndcap", cscTnP_chamberEndcap, &b_cscTnP_chamberEndcap);
   fChain->SetBranchAddress("cscTnP_chamberRing1", cscTnP_chamberRing1, &b_cscTnP_chamberRing1);
   fChain->SetBranchAddress("cscTnP_chamberRing2", cscTnP_chamberRing2, &b_cscTnP_chamberRing2);
   fChain->SetBranchAddress("cscTnP_chamberRing3", cscTnP_chamberRing3, &b_cscTnP_chamberRing3);
   fChain->SetBranchAddress("cscTnP_chamberRing4", cscTnP_chamberRing4, &b_cscTnP_chamberRing4);
   fChain->SetBranchAddress("cscTnP_chamberChamber1", cscTnP_chamberChamber1, &b_cscTnP_chamberChamber1);
   fChain->SetBranchAddress("cscTnP_chamberChamber2", cscTnP_chamberChamber2, &b_cscTnP_chamberChamber2);
   fChain->SetBranchAddress("cscTnP_chamberChamber3", cscTnP_chamberChamber3, &b_cscTnP_chamberChamber3);
   fChain->SetBranchAddress("cscTnP_chamberChamber4", cscTnP_chamberChamber4, &b_cscTnP_chamberChamber4);
   fChain->SetBranchAddress("cscTnP_chamberLayer1", cscTnP_chamberLayer1, &b_cscTnP_chamberLayer1);
   fChain->SetBranchAddress("cscTnP_chamberLayer2", cscTnP_chamberLayer2, &b_cscTnP_chamberLayer2);
   fChain->SetBranchAddress("cscTnP_chamberLayer3", cscTnP_chamberLayer3, &b_cscTnP_chamberLayer3);
   fChain->SetBranchAddress("cscTnP_chamberLayer4", cscTnP_chamberLayer4, &b_cscTnP_chamberLayer4);
   fChain->SetBranchAddress("cscTnP_muonPt", cscTnP_muonPt, &b_cscTnP_muonPt);
   fChain->SetBranchAddress("cscTnP_muonPhi", cscTnP_muonPhi, &b_cscTnP_muonPhi);
   fChain->SetBranchAddress("cscTnP_muonEta", cscTnP_muonEta, &b_cscTnP_muonEta);
   fChain->SetBranchAddress("cscTnP_muonPtError", cscTnP_muonPtError, &b_cscTnP_muonPtError);
   fChain->SetBranchAddress("cscTnP_muonPhiError", cscTnP_muonPhiError, &b_cscTnP_muonPhiError);
   fChain->SetBranchAddress("cscTnP_muonEtaError", cscTnP_muonEtaError, &b_cscTnP_muonEtaError);
   fChain->SetBranchAddress("cscTnP_muonDXY", cscTnP_muonDXY, &b_cscTnP_muonDXY);
   fChain->SetBranchAddress("cscTnP_muonDZ", cscTnP_muonDZ, &b_cscTnP_muonDZ);
   fChain->SetBranchAddress("cscTnP_muonChi2", cscTnP_muonChi2, &b_cscTnP_muonChi2);
   fChain->SetBranchAddress("cscTnP_muonIso", cscTnP_muonIso, &b_cscTnP_muonIso);
   fChain->SetBranchAddress("cscTnP_trackPt", cscTnP_trackPt, &b_cscTnP_trackPt);
   fChain->SetBranchAddress("cscTnP_trackP", cscTnP_trackP, &b_cscTnP_trackP);
   fChain->SetBranchAddress("cscTnP_trackPhi", cscTnP_trackPhi, &b_cscTnP_trackPhi);
   fChain->SetBranchAddress("cscTnP_trackEta", cscTnP_trackEta, &b_cscTnP_trackEta);
   fChain->SetBranchAddress("cscTnP_trackPtError", cscTnP_trackPtError, &b_cscTnP_trackPtError);
   fChain->SetBranchAddress("cscTnP_trackPhiError", cscTnP_trackPhiError, &b_cscTnP_trackPhiError);
   fChain->SetBranchAddress("cscTnP_trackEtaError", cscTnP_trackEtaError, &b_cscTnP_trackEtaError);
   fChain->SetBranchAddress("cscTnP_trackDXY", cscTnP_trackDXY, &b_cscTnP_trackDXY);
   fChain->SetBranchAddress("cscTnP_trackDZ", cscTnP_trackDZ, &b_cscTnP_trackDZ);
   fChain->SetBranchAddress("cscTnP_trackChi2", cscTnP_trackChi2, &b_cscTnP_trackChi2);
   fChain->SetBranchAddress("cscTnP_trackIso", cscTnP_trackIso, &b_cscTnP_trackIso);
   fChain->SetBranchAddress("cscTnP_zMass", cscTnP_zMass, &b_cscTnP_zMass);
   fChain->SetBranchAddress("cscTnP_dRTrackMuon", cscTnP_dRTrackMuon, &b_cscTnP_dRTrackMuon);
   fChain->SetBranchAddress("cscTnP_numberOfPrimaryVertidies", cscTnP_numberOfPrimaryVertidies, &b_cscTnP_numberOfPrimaryVertidies);
   fChain->SetBranchAddress("cscTnP_ttIntLocalX1", cscTnP_ttIntLocalX1, &b_cscTnP_ttIntLocalX1);
   fChain->SetBranchAddress("cscTnP_ttIntLocalX2", cscTnP_ttIntLocalX2, &b_cscTnP_ttIntLocalX2);
   fChain->SetBranchAddress("cscTnP_ttIntLocalX3", cscTnP_ttIntLocalX3, &b_cscTnP_ttIntLocalX3);
   fChain->SetBranchAddress("cscTnP_ttIntLocalX4", cscTnP_ttIntLocalX4, &b_cscTnP_ttIntLocalX4);
   fChain->SetBranchAddress("cscTnP_ttIntLocalY1", cscTnP_ttIntLocalY1, &b_cscTnP_ttIntLocalY1);
   fChain->SetBranchAddress("cscTnP_ttIntLocalY2", cscTnP_ttIntLocalY2, &b_cscTnP_ttIntLocalY2);
   fChain->SetBranchAddress("cscTnP_ttIntLocalY3", cscTnP_ttIntLocalY3, &b_cscTnP_ttIntLocalY3);
   fChain->SetBranchAddress("cscTnP_ttIntLocalY4", cscTnP_ttIntLocalY4, &b_cscTnP_ttIntLocalY4);
   fChain->SetBranchAddress("cscTnP_ttIntLocalErrorX1", cscTnP_ttIntLocalErrorX1, &b_cscTnP_ttIntLocalErrorX1);
   fChain->SetBranchAddress("cscTnP_ttIntLocalErrorX2", cscTnP_ttIntLocalErrorX2, &b_cscTnP_ttIntLocalErrorX2);
   fChain->SetBranchAddress("cscTnP_ttIntLocalErrorX3", cscTnP_ttIntLocalErrorX3, &b_cscTnP_ttIntLocalErrorX3);
   fChain->SetBranchAddress("cscTnP_ttIntLocalErrorX4", cscTnP_ttIntLocalErrorX4, &b_cscTnP_ttIntLocalErrorX4);
   fChain->SetBranchAddress("cscTnP_ttIntLocalErrorY1", cscTnP_ttIntLocalErrorY1, &b_cscTnP_ttIntLocalErrorY1);
   fChain->SetBranchAddress("cscTnP_ttIntLocalErrorY2", cscTnP_ttIntLocalErrorY2, &b_cscTnP_ttIntLocalErrorY2);
   fChain->SetBranchAddress("cscTnP_ttIntLocalErrorY3", cscTnP_ttIntLocalErrorY3, &b_cscTnP_ttIntLocalErrorY3);
   fChain->SetBranchAddress("cscTnP_ttIntLocalErrorY4", cscTnP_ttIntLocalErrorY4, &b_cscTnP_ttIntLocalErrorY4);
   fChain->SetBranchAddress("cscTnP_ttIntLocalW1", cscTnP_ttIntLocalW1, &b_cscTnP_ttIntLocalW1);
   fChain->SetBranchAddress("cscTnP_ttIntLocalW2", cscTnP_ttIntLocalW2, &b_cscTnP_ttIntLocalW2);
   fChain->SetBranchAddress("cscTnP_ttIntLocalW3", cscTnP_ttIntLocalW3, &b_cscTnP_ttIntLocalW3);
   fChain->SetBranchAddress("cscTnP_ttIntLocalW4", cscTnP_ttIntLocalW4, &b_cscTnP_ttIntLocalW4);
   fChain->SetBranchAddress("cscTnP_ttIntLocalS1", cscTnP_ttIntLocalS1, &b_cscTnP_ttIntLocalS1);
   fChain->SetBranchAddress("cscTnP_ttIntLocalS2", cscTnP_ttIntLocalS2, &b_cscTnP_ttIntLocalS2);
   fChain->SetBranchAddress("cscTnP_ttIntLocalS3", cscTnP_ttIntLocalS3, &b_cscTnP_ttIntLocalS3);
   fChain->SetBranchAddress("cscTnP_ttIntLocalS4", cscTnP_ttIntLocalS4, &b_cscTnP_ttIntLocalS4);
   fChain->SetBranchAddress("cscTnP_ttIntEta1", cscTnP_ttIntEta1, &b_cscTnP_ttIntEta1);
   fChain->SetBranchAddress("cscTnP_ttIntEta2", cscTnP_ttIntEta2, &b_cscTnP_ttIntEta2);
   fChain->SetBranchAddress("cscTnP_ttIntEta3", cscTnP_ttIntEta3, &b_cscTnP_ttIntEta3);
   fChain->SetBranchAddress("cscTnP_ttIntEta4", cscTnP_ttIntEta4, &b_cscTnP_ttIntEta4);
   fChain->SetBranchAddress("cscTnP_ttDistToEdge1", cscTnP_ttDistToEdge1, &b_cscTnP_ttDistToEdge1);
   fChain->SetBranchAddress("cscTnP_ttDistToEdge2", cscTnP_ttDistToEdge2, &b_cscTnP_ttDistToEdge2);
   fChain->SetBranchAddress("cscTnP_ttDistToEdge3", cscTnP_ttDistToEdge3, &b_cscTnP_ttDistToEdge3);
   fChain->SetBranchAddress("cscTnP_ttDistToEdge4", cscTnP_ttDistToEdge4, &b_cscTnP_ttDistToEdge4);
   fChain->SetBranchAddress("cscTnP_ttDistToHVGap1", cscTnP_ttDistToHVGap1, &b_cscTnP_ttDistToHVGap1);
   fChain->SetBranchAddress("cscTnP_ttDistToHVGap2", cscTnP_ttDistToHVGap2, &b_cscTnP_ttDistToHVGap2);
   fChain->SetBranchAddress("cscTnP_ttDistToHVGap3", cscTnP_ttDistToHVGap3, &b_cscTnP_ttDistToHVGap3);
   fChain->SetBranchAddress("cscTnP_ttDistToHVGap4", cscTnP_ttDistToHVGap4, &b_cscTnP_ttDistToHVGap4);
   fChain->SetBranchAddress("cscTnP_segLocalX1", cscTnP_segLocalX1, &b_cscTnP_segLocalX1);
   fChain->SetBranchAddress("cscTnP_segLocalX2", cscTnP_segLocalX2, &b_cscTnP_segLocalX2);
   fChain->SetBranchAddress("cscTnP_segLocalX3", cscTnP_segLocalX3, &b_cscTnP_segLocalX3);
   fChain->SetBranchAddress("cscTnP_segLocalX4", cscTnP_segLocalX4, &b_cscTnP_segLocalX4);
   fChain->SetBranchAddress("cscTnP_segLocalY1", cscTnP_segLocalY1, &b_cscTnP_segLocalY1);
   fChain->SetBranchAddress("cscTnP_segLocalY2", cscTnP_segLocalY2, &b_cscTnP_segLocalY2);
   fChain->SetBranchAddress("cscTnP_segLocalY3", cscTnP_segLocalY3, &b_cscTnP_segLocalY3);
   fChain->SetBranchAddress("cscTnP_segLocalY4", cscTnP_segLocalY4, &b_cscTnP_segLocalY4);
   fChain->SetBranchAddress("cscTnP_segLocalErrorX1", cscTnP_segLocalErrorX1, &b_cscTnP_segLocalErrorX1);
   fChain->SetBranchAddress("cscTnP_segLocalErrorX2", cscTnP_segLocalErrorX2, &b_cscTnP_segLocalErrorX2);
   fChain->SetBranchAddress("cscTnP_segLocalErrorX3", cscTnP_segLocalErrorX3, &b_cscTnP_segLocalErrorX3);
   fChain->SetBranchAddress("cscTnP_segLocalErrorX4", cscTnP_segLocalErrorX4, &b_cscTnP_segLocalErrorX4);
   fChain->SetBranchAddress("cscTnP_segLocalErrorY1", cscTnP_segLocalErrorY1, &b_cscTnP_segLocalErrorY1);
   fChain->SetBranchAddress("cscTnP_segLocalErrorY2", cscTnP_segLocalErrorY2, &b_cscTnP_segLocalErrorY2);
   fChain->SetBranchAddress("cscTnP_segLocalErrorY3", cscTnP_segLocalErrorY3, &b_cscTnP_segLocalErrorY3);
   fChain->SetBranchAddress("cscTnP_segLocalErrorY4", cscTnP_segLocalErrorY4, &b_cscTnP_segLocalErrorY4);
   fChain->SetBranchAddress("cscTnP_ttIntSegResidualLocalX1", cscTnP_ttIntSegResidualLocalX1, &b_cscTnP_ttIntSegResidualLocalX1);
   fChain->SetBranchAddress("cscTnP_ttIntSegResidualLocalX2", cscTnP_ttIntSegResidualLocalX2, &b_cscTnP_ttIntSegResidualLocalX2);
   fChain->SetBranchAddress("cscTnP_ttIntSegResidualLocalX3", cscTnP_ttIntSegResidualLocalX3, &b_cscTnP_ttIntSegResidualLocalX3);
   fChain->SetBranchAddress("cscTnP_ttIntSegResidualLocalX4", cscTnP_ttIntSegResidualLocalX4, &b_cscTnP_ttIntSegResidualLocalX4);
   fChain->SetBranchAddress("cscTnP_ttIntSegResidualLocalY1", cscTnP_ttIntSegResidualLocalY1, &b_cscTnP_ttIntSegResidualLocalY1);
   fChain->SetBranchAddress("cscTnP_ttIntSegResidualLocalY2", cscTnP_ttIntSegResidualLocalY2, &b_cscTnP_ttIntSegResidualLocalY2);
   fChain->SetBranchAddress("cscTnP_ttIntSegResidualLocalY3", cscTnP_ttIntSegResidualLocalY3, &b_cscTnP_ttIntSegResidualLocalY3);
   fChain->SetBranchAddress("cscTnP_ttIntSegResidualLocalY4", cscTnP_ttIntSegResidualLocalY4, &b_cscTnP_ttIntSegResidualLocalY4);
   fChain->SetBranchAddress("nmuon_matches", &nmuon_matches, &b_nmuon_matches);
   fChain->SetBranchAddress("muon_matches_wheel", muon_matches_wheel, &b_muon_matches_wheel);
   fChain->SetBranchAddress("muon_matches_sector", muon_matches_sector, &b_muon_matches_sector);
   fChain->SetBranchAddress("muon_matches_station", muon_matches_station, &b_muon_matches_station);
   fChain->SetBranchAddress("muon_matches_x", muon_matches_x, &b_muon_matches_x);
   fChain->SetBranchAddress("muon_matches_y", muon_matches_y, &b_muon_matches_y);
   fChain->SetBranchAddress("muon_matches_phi", muon_matches_phi, &b_muon_matches_phi);
   fChain->SetBranchAddress("muon_matches_eta", muon_matches_eta, &b_muon_matches_eta);
   fChain->SetBranchAddress("muon_matches_dXdZ", muon_matches_dXdZ, &b_muon_matches_dXdZ);
   fChain->SetBranchAddress("muon_matches_dYdZ", muon_matches_dYdZ, &b_muon_matches_dYdZ);
   fChain->SetBranchAddress("nmuon_staMatches", &nmuon_staMatches, &b_nmuon_staMatches);
   fChain->SetBranchAddress("muon_staMatches_MuSegIdx", muon_staMatches_MuSegIdx, &b_muon_staMatches_MuSegIdx);
   fChain->SetBranchAddress("ndtSegment_extr", &ndtSegment_extr, &b_ndtSegment_extr);
   fChain->SetBranchAddress("dtSegment_extr_ExpWire", dtSegment_extr_ExpWire, &b_dtSegment_extr_ExpWire);
   fChain->SetBranchAddress("dtSegment_extr_ExpPos", dtSegment_extr_ExpPos, &b_dtSegment_extr_ExpPos);
   fChain->SetBranchAddress("dtSegment_extr_ExpPosCh", dtSegment_extr_ExpPosCh, &b_dtSegment_extr_ExpPosCh);
   fChain->SetBranchAddress("ndtSegment_hits", &ndtSegment_hits, &b_ndtSegment_hits);
   fChain->SetBranchAddress("dtSegment_hits_side", dtSegment_hits_side, &b_dtSegment_hits_side);
   fChain->SetBranchAddress("dtSegment_hits_wire", dtSegment_hits_wire, &b_dtSegment_hits_wire);
   fChain->SetBranchAddress("dtSegment_hits_wirePos", dtSegment_hits_wirePos, &b_dtSegment_hits_wirePos);
   fChain->SetBranchAddress("dtSegment_hits_layer", dtSegment_hits_layer, &b_dtSegment_hits_layer);
   fChain->SetBranchAddress("dtSegment_hits_superLayer", dtSegment_hits_superLayer, &b_dtSegment_hits_superLayer);
   fChain->SetBranchAddress("dtSegment_hits_pos", dtSegment_hits_pos, &b_dtSegment_hits_pos);
   fChain->SetBranchAddress("dtSegment_hits_posCh", dtSegment_hits_posCh, &b_dtSegment_hits_posCh);
   fChain->SetBranchAddress("dtSegment_hits_posErr", dtSegment_hits_posErr, &b_dtSegment_hits_posErr);
   fChain->SetBranchAddress("dtSegment_hits_time", dtSegment_hits_time, &b_dtSegment_hits_time);
   fChain->SetBranchAddress("dtSegment_hits_timeCali", dtSegment_hits_timeCali, &b_dtSegment_hits_timeCali);
   fChain->SetBranchAddress("nmuon_propagated", &nmuon_propagated, &b_nmuon_propagated);
   fChain->SetBranchAddress("muon_propagated_propagated_nME1hits", muon_propagated_propagated_nME1hits, &b_muon_propagated_propagated_nME1hits);
   fChain->SetBranchAddress("muon_propagated_propagated_nME2hits", muon_propagated_propagated_nME2hits, &b_muon_propagated_propagated_nME2hits);
   fChain->SetBranchAddress("muon_propagated_propagated_nME3hits", muon_propagated_propagated_nME3hits, &b_muon_propagated_propagated_nME3hits);
   fChain->SetBranchAddress("muon_propagated_propagated_nME4hits", muon_propagated_propagated_nME4hits, &b_muon_propagated_propagated_nME4hits);
   fChain->SetBranchAddress("muon_propagated_propagated_region", muon_propagated_propagated_region, &b_muon_propagated_propagated_region);
   fChain->SetBranchAddress("muon_propagated_propagated_layer", muon_propagated_propagated_layer, &b_muon_propagated_propagated_layer);
   fChain->SetBranchAddress("muon_propagated_propagated_chamber", muon_propagated_propagated_chamber, &b_muon_propagated_propagated_chamber);
   fChain->SetBranchAddress("muon_propagated_propagated_etaP", muon_propagated_propagated_etaP, &b_muon_propagated_propagated_etaP);
   fChain->SetBranchAddress("muon_propagated_propagated_isincoming", muon_propagated_propagated_isincoming, &b_muon_propagated_propagated_isincoming);
   fChain->SetBranchAddress("muon_propagated_propagated_isinsideout", muon_propagated_propagated_isinsideout, &b_muon_propagated_propagated_isinsideout);
   fChain->SetBranchAddress("muon_propagated_propagated_muIdx", muon_propagated_propagated_muIdx, &b_muon_propagated_propagated_muIdx);
   fChain->SetBranchAddress("muon_propagated_propagatedLoc_x", muon_propagated_propagatedLoc_x, &b_muon_propagated_propagatedLoc_x);
   fChain->SetBranchAddress("muon_propagated_propagatedLoc_y", muon_propagated_propagatedLoc_y, &b_muon_propagated_propagatedLoc_y);
   fChain->SetBranchAddress("muon_propagated_propagatedLoc_z", muon_propagated_propagatedLoc_z, &b_muon_propagated_propagatedLoc_z);
   fChain->SetBranchAddress("muon_propagated_propagatedLoc_r", muon_propagated_propagatedLoc_r, &b_muon_propagated_propagatedLoc_r);
   fChain->SetBranchAddress("muon_propagated_propagatedLoc_phi", muon_propagated_propagatedLoc_phi, &b_muon_propagated_propagatedLoc_phi);
   fChain->SetBranchAddress("muon_propagated_propagatedLoc_dirX", muon_propagated_propagatedLoc_dirX, &b_muon_propagated_propagatedLoc_dirX);
   fChain->SetBranchAddress("muon_propagated_propagatedLoc_dirY", muon_propagated_propagatedLoc_dirY, &b_muon_propagated_propagatedLoc_dirY);
   fChain->SetBranchAddress("muon_propagated_propagatedLoc_dirZ", muon_propagated_propagatedLoc_dirZ, &b_muon_propagated_propagatedLoc_dirZ);
   fChain->SetBranchAddress("muon_propagated_propagatedLoc_errX", muon_propagated_propagatedLoc_errX, &b_muon_propagated_propagatedLoc_errX);
   fChain->SetBranchAddress("muon_propagated_propagatedLoc_errY", muon_propagated_propagatedLoc_errY, &b_muon_propagated_propagatedLoc_errY);
   fChain->SetBranchAddress("muon_propagated_propagatedGlb_x", muon_propagated_propagatedGlb_x, &b_muon_propagated_propagatedGlb_x);
   fChain->SetBranchAddress("muon_propagated_propagatedGlb_y", muon_propagated_propagatedGlb_y, &b_muon_propagated_propagatedGlb_y);
   fChain->SetBranchAddress("muon_propagated_propagatedGlb_z", muon_propagated_propagatedGlb_z, &b_muon_propagated_propagatedGlb_z);
   fChain->SetBranchAddress("muon_propagated_propagatedGlb_r", muon_propagated_propagatedGlb_r, &b_muon_propagated_propagatedGlb_r);
   fChain->SetBranchAddress("muon_propagated_propagatedGlb_phi", muon_propagated_propagatedGlb_phi, &b_muon_propagated_propagatedGlb_phi);
   fChain->SetBranchAddress("muon_propagated_propagatedGlb_errX", muon_propagated_propagatedGlb_errX, &b_muon_propagated_propagatedGlb_errX);
   fChain->SetBranchAddress("muon_propagated_propagatedGlb_errY", muon_propagated_propagatedGlb_errY, &b_muon_propagated_propagatedGlb_errY);
   fChain->SetBranchAddress("muon_propagated_propagatedGlb_rerr", muon_propagated_propagatedGlb_rerr, &b_muon_propagated_propagatedGlb_rerr);
   fChain->SetBranchAddress("muon_propagated_propagatedGlb_phierr", muon_propagated_propagatedGlb_phierr, &b_muon_propagated_propagatedGlb_phierr);
   fChain->SetBranchAddress("muon_propagated_propagated_EtaPartition_centerX", muon_propagated_propagated_EtaPartition_centerX, &b_muon_propagated_propagated_EtaPartition_centerX);
   fChain->SetBranchAddress("muon_propagated_propagated_EtaPartition_centerY", muon_propagated_propagated_EtaPartition_centerY, &b_muon_propagated_propagated_EtaPartition_centerY);
   fChain->SetBranchAddress("muon_propagated_propagated_EtaPartition_phiMax", muon_propagated_propagated_EtaPartition_phiMax, &b_muon_propagated_propagated_EtaPartition_phiMax);
   fChain->SetBranchAddress("muon_propagated_propagated_EtaPartition_phiMin", muon_propagated_propagated_EtaPartition_phiMin, &b_muon_propagated_propagated_EtaPartition_phiMin);
   fChain->SetBranchAddress("muon_propagated_propagated_EtaPartition_rMax", muon_propagated_propagated_EtaPartition_rMax, &b_muon_propagated_propagated_EtaPartition_rMax);
   fChain->SetBranchAddress("muon_propagated_propagated_EtaPartition_rMin", muon_propagated_propagated_EtaPartition_rMin, &b_muon_propagated_propagated_EtaPartition_rMin);
   fChain->SetBranchAddress("nltTwinMuxIn", &nltTwinMuxIn, &b_nltTwinMuxIn);
   fChain->SetBranchAddress("ltTwinMuxIn_wheel", ltTwinMuxIn_wheel, &b_ltTwinMuxIn_wheel);
   fChain->SetBranchAddress("ltTwinMuxIn_sector", ltTwinMuxIn_sector, &b_ltTwinMuxIn_sector);
   fChain->SetBranchAddress("ltTwinMuxIn_station", ltTwinMuxIn_station, &b_ltTwinMuxIn_station);
   fChain->SetBranchAddress("ltTwinMuxIn_quality", ltTwinMuxIn_quality, &b_ltTwinMuxIn_quality);
   fChain->SetBranchAddress("ltTwinMuxIn_bx", ltTwinMuxIn_bx, &b_ltTwinMuxIn_bx);
   fChain->SetBranchAddress("ltTwinMuxIn_is2nd", ltTwinMuxIn_is2nd, &b_ltTwinMuxIn_is2nd);
   fChain->SetBranchAddress("ltTwinMuxIn_phi", ltTwinMuxIn_phi, &b_ltTwinMuxIn_phi);
   fChain->SetBranchAddress("ltTwinMuxIn_phiB", ltTwinMuxIn_phiB, &b_ltTwinMuxIn_phiB);
   fChain->SetBranchAddress("ltTwinMuxIn_posLoc_x", ltTwinMuxIn_posLoc_x, &b_ltTwinMuxIn_posLoc_x);
   fChain->SetBranchAddress("ltTwinMuxIn_dirLoc_phi", ltTwinMuxIn_dirLoc_phi, &b_ltTwinMuxIn_dirLoc_phi);
   fChain->SetBranchAddress("nltTwinMuxInTh", &nltTwinMuxInTh, &b_nltTwinMuxInTh);
   fChain->SetBranchAddress("ltTwinMuxInTh_wheel", ltTwinMuxInTh_wheel, &b_ltTwinMuxInTh_wheel);
   fChain->SetBranchAddress("ltTwinMuxInTh_sector", ltTwinMuxInTh_sector, &b_ltTwinMuxInTh_sector);
   fChain->SetBranchAddress("ltTwinMuxInTh_station", ltTwinMuxInTh_station, &b_ltTwinMuxInTh_station);
   fChain->SetBranchAddress("ltTwinMuxInTh_bx", ltTwinMuxInTh_bx, &b_ltTwinMuxInTh_bx);
   fChain->SetBranchAddress("ltTwinMuxInTh_hitMap", ltTwinMuxInTh_hitMap, &b_ltTwinMuxInTh_hitMap);
   fChain->SetBranchAddress("nltTwinMuxOut", &nltTwinMuxOut, &b_nltTwinMuxOut);
   fChain->SetBranchAddress("ltTwinMuxOut_wheel", ltTwinMuxOut_wheel, &b_ltTwinMuxOut_wheel);
   fChain->SetBranchAddress("ltTwinMuxOut_sector", ltTwinMuxOut_sector, &b_ltTwinMuxOut_sector);
   fChain->SetBranchAddress("ltTwinMuxOut_station", ltTwinMuxOut_station, &b_ltTwinMuxOut_station);
   fChain->SetBranchAddress("ltTwinMuxOut_quality", ltTwinMuxOut_quality, &b_ltTwinMuxOut_quality);
   fChain->SetBranchAddress("ltTwinMuxOut_rpcBit", ltTwinMuxOut_rpcBit, &b_ltTwinMuxOut_rpcBit);
   fChain->SetBranchAddress("ltTwinMuxOut_bx", ltTwinMuxOut_bx, &b_ltTwinMuxOut_bx);
   fChain->SetBranchAddress("ltTwinMuxOut_is2nd", ltTwinMuxOut_is2nd, &b_ltTwinMuxOut_is2nd);
   fChain->SetBranchAddress("ltTwinMuxOut_phi", ltTwinMuxOut_phi, &b_ltTwinMuxOut_phi);
   fChain->SetBranchAddress("ltTwinMuxOut_phiB", ltTwinMuxOut_phiB, &b_ltTwinMuxOut_phiB);
   fChain->SetBranchAddress("ltTwinMuxOut_posLoc_x", ltTwinMuxOut_posLoc_x, &b_ltTwinMuxOut_posLoc_x);
   fChain->SetBranchAddress("ltTwinMuxOut_dirLoc_phi", ltTwinMuxOut_dirLoc_phi, &b_ltTwinMuxOut_dirLoc_phi);
   fChain->SetBranchAddress("nmuon", &nmuon, &b_nmuon);
   fChain->SetBranchAddress("muon_rpcMu_numberOfMatchedRPCLayers", muon_rpcMu_numberOfMatchedRPCLayers, &b_muon_rpcMu_numberOfMatchedRPCLayers);
   fChain->SetBranchAddress("muon_staMu_numberOfValidMuonHits", muon_staMu_numberOfValidMuonHits, &b_muon_staMu_numberOfValidMuonHits);
   fChain->SetBranchAddress("muon_trkMu_numberOfMatchedStations", muon_trkMu_numberOfMatchedStations, &b_muon_trkMu_numberOfMatchedStations);
   fChain->SetBranchAddress("muon_trk_algo", muon_trk_algo, &b_muon_trk_algo);
   fChain->SetBranchAddress("muon_trk_numberOfValidPixelHits", muon_trk_numberOfValidPixelHits, &b_muon_trk_numberOfValidPixelHits);
   fChain->SetBranchAddress("muon_trk_numberOfValidTrackerLayers", muon_trk_numberOfValidTrackerLayers, &b_muon_trk_numberOfValidTrackerLayers);
   fChain->SetBranchAddress("muon_trk_origAlgo", muon_trk_origAlgo, &b_muon_trk_origAlgo);
   fChain->SetBranchAddress("muon_trk_validFraction", muon_trk_validFraction, &b_muon_trk_validFraction);
   fChain->SetBranchAddress("muon_isGEM", muon_isGEM, &b_muon_isGEM);
   fChain->SetBranchAddress("muon_isGlobal", muon_isGlobal, &b_muon_isGlobal);
   fChain->SetBranchAddress("muon_isLoose", muon_isLoose, &b_muon_isLoose);
   fChain->SetBranchAddress("muon_isMedium", muon_isMedium, &b_muon_isMedium);
   fChain->SetBranchAddress("muon_isRPC", muon_isRPC, &b_muon_isRPC);
   fChain->SetBranchAddress("muon_isStandalone", muon_isStandalone, &b_muon_isStandalone);
   fChain->SetBranchAddress("muon_isTight", muon_isTight, &b_muon_isTight);
   fChain->SetBranchAddress("muon_isTracker", muon_isTracker, &b_muon_isTracker);
   fChain->SetBranchAddress("muon_trkMu_stationMask", muon_trkMu_stationMask, &b_muon_trkMu_stationMask);
   fChain->SetBranchAddress("muon_charge", muon_charge, &b_muon_charge);
   fChain->SetBranchAddress("muon_pdgId", muon_pdgId, &b_muon_pdgId);
   fChain->SetBranchAddress("muon_eta", muon_eta, &b_muon_eta);
   fChain->SetBranchAddress("muon_glbMu_normChi2", muon_glbMu_normChi2, &b_muon_glbMu_normChi2);
   fChain->SetBranchAddress("muon_mass", muon_mass, &b_muon_mass);
   fChain->SetBranchAddress("muon_pfIso04", muon_pfIso04, &b_muon_pfIso04);
   fChain->SetBranchAddress("muon_phi", muon_phi, &b_muon_phi);
   fChain->SetBranchAddress("muon_pt", muon_pt, &b_muon_pt);
   fChain->SetBranchAddress("muon_staMu_normChi2", muon_staMu_normChi2, &b_muon_staMu_normChi2);
   fChain->SetBranchAddress("muon_trkIso03", muon_trkIso03, &b_muon_trkIso03);
   fChain->SetBranchAddress("muon_trk_dxy", muon_trk_dxy, &b_muon_trk_dxy);
   fChain->SetBranchAddress("muon_trk_dz", muon_trk_dz, &b_muon_trk_dz);
   fChain->SetBranchAddress("nrpcDigi", &nrpcDigi, &b_nrpcDigi);
   fChain->SetBranchAddress("rpcDigi_layer", rpcDigi_layer, &b_rpcDigi_layer);
   fChain->SetBranchAddress("rpcDigi_region", rpcDigi_region, &b_rpcDigi_region);
   fChain->SetBranchAddress("rpcDigi_ring", rpcDigi_ring, &b_rpcDigi_ring);
   fChain->SetBranchAddress("rpcDigi_roll", rpcDigi_roll, &b_rpcDigi_roll);
   fChain->SetBranchAddress("rpcDigi_sector", rpcDigi_sector, &b_rpcDigi_sector);
   fChain->SetBranchAddress("rpcDigi_station", rpcDigi_station, &b_rpcDigi_station);
   fChain->SetBranchAddress("rpcDigi_subsector", rpcDigi_subsector, &b_rpcDigi_subsector);
   fChain->SetBranchAddress("rpcDigi_strip", rpcDigi_strip, &b_rpcDigi_strip);
   fChain->SetBranchAddress("rpcDigi_bx", rpcDigi_bx, &b_rpcDigi_bx);
   fChain->SetBranchAddress("rpcDigi_rawId", rpcDigi_rawId, &b_rpcDigi_rawId);
   fChain->SetBranchAddress("nrpcRecHit", &nrpcRecHit, &b_nrpcRecHit);
   fChain->SetBranchAddress("rpcRecHit_clusterSize", rpcRecHit_clusterSize, &b_rpcRecHit_clusterSize);
   fChain->SetBranchAddress("rpcRecHit_firstClusterStrip", rpcRecHit_firstClusterStrip, &b_rpcRecHit_firstClusterStrip);
   fChain->SetBranchAddress("rpcRecHit_layer", rpcRecHit_layer, &b_rpcRecHit_layer);
   fChain->SetBranchAddress("rpcRecHit_region", rpcRecHit_region, &b_rpcRecHit_region);
   fChain->SetBranchAddress("rpcRecHit_ring", rpcRecHit_ring, &b_rpcRecHit_ring);
   fChain->SetBranchAddress("rpcRecHit_roll", rpcRecHit_roll, &b_rpcRecHit_roll);
   fChain->SetBranchAddress("rpcRecHit_sector", rpcRecHit_sector, &b_rpcRecHit_sector);
   fChain->SetBranchAddress("rpcRecHit_station", rpcRecHit_station, &b_rpcRecHit_station);
   fChain->SetBranchAddress("rpcRecHit_subsector", rpcRecHit_subsector, &b_rpcRecHit_subsector);
   fChain->SetBranchAddress("rpcRecHit_bx", rpcRecHit_bx, &b_rpcRecHit_bx);
   fChain->SetBranchAddress("rpcRecHit_rawId", rpcRecHit_rawId, &b_rpcRecHit_rawId);
   fChain->SetBranchAddress("rpcRecHit_coordX", rpcRecHit_coordX, &b_rpcRecHit_coordX);
   fChain->SetBranchAddress("rpcRecHit_coordY", rpcRecHit_coordY, &b_rpcRecHit_coordY);
   fChain->SetBranchAddress("rpcRecHit_coordZ", rpcRecHit_coordZ, &b_rpcRecHit_coordZ);
   fChain->SetBranchAddress("rpcRecHit_time", rpcRecHit_time, &b_rpcRecHit_time);
   fChain->SetBranchAddress("muon_firesIsoTrig", muon_firesIsoTrig, &b_muon_firesIsoTrig);
   fChain->SetBranchAddress("muon_firesTrig", muon_firesTrig, &b_muon_firesTrig);
   fChain->SetBranchAddress("muon_nMatches", muon_nMatches, &b_muon_nMatches);
   fChain->SetBranchAddress("muon_staMu_nMatchSeg", muon_staMu_nMatchSeg, &b_muon_staMu_nMatchSeg);
   fChain->SetBranchAddress("muon_matches_begin", muon_matches_begin, &b_muon_matches_begin);
   fChain->SetBranchAddress("muon_matches_end", muon_matches_end, &b_muon_matches_end);
   fChain->SetBranchAddress("muon_staMatches_begin", muon_staMatches_begin, &b_muon_staMatches_begin);
   fChain->SetBranchAddress("muon_staMatches_end", muon_staMatches_end, &b_muon_staMatches_end);
   fChain->SetBranchAddress("dtSegment_seg2D_hits_begin", dtSegment_seg2D_hits_begin, &b_dtSegment_seg2D_hits_begin);
   fChain->SetBranchAddress("dtSegment_seg2D_hits_end", dtSegment_seg2D_hits_end, &b_dtSegment_seg2D_hits_end);
   fChain->SetBranchAddress("dtSegment_seg4D_extr_begin", dtSegment_seg4D_extr_begin, &b_dtSegment_seg4D_extr_begin);
   fChain->SetBranchAddress("dtSegment_seg4D_extr_end", dtSegment_seg4D_extr_end, &b_dtSegment_seg4D_extr_end);
   fChain->SetBranchAddress("dtSegment_seg4D_posLoc_x_SL1", dtSegment_seg4D_posLoc_x_SL1, &b_dtSegment_seg4D_posLoc_x_SL1);
   fChain->SetBranchAddress("dtSegment_seg4D_posLoc_x_SL3", dtSegment_seg4D_posLoc_x_SL3, &b_dtSegment_seg4D_posLoc_x_SL3);
   fChain->SetBranchAddress("dtSegment_seg4D_posLoc_x_midPlane", dtSegment_seg4D_posLoc_x_midPlane, &b_dtSegment_seg4D_posLoc_x_midPlane);
   fChain->SetBranchAddress("muon_innermost_x", muon_innermost_x, &b_muon_innermost_x);
   fChain->SetBranchAddress("muon_innermost_y", muon_innermost_y, &b_muon_innermost_y);
   fChain->SetBranchAddress("muon_innermost_z", muon_innermost_z, &b_muon_innermost_z);
   fChain->SetBranchAddress("muon_outermost_x", muon_outermost_x, &b_muon_outermost_x);
   fChain->SetBranchAddress("muon_outermost_y", muon_outermost_y, &b_muon_outermost_y);
   fChain->SetBranchAddress("muon_outermost_z", muon_outermost_z, &b_muon_outermost_z);
   Notify();
}

Bool_t RPC_Analyzer::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void RPC_Analyzer::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t RPC_Analyzer::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef RPC_Analyzer_cxx
