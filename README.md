# Wellcome to this repository

Instruction for running this analysis script.

**A example using nanoAOD MuonDPGNtuples**



# How to find the dataset?
For this analysis a ntuple in EOS is used. One can log into your lxplus account and:

$ git clone https://github.com/Silas-SJ/RPC_Silas.git

After logging into your lxplus account one can find the dataset in the path below:

$ ls /eos/cms/store/group/dpg_muon/MuonDPGNtuples/ntuples/nano_mu_RAW2DIGI_NANO_ZMu_Run2023C_v2.root


# How to run this analysis code - C++ (TTreReader based)?
$ root -b

[0].L RPC_Analyzer.C

[1] RPC_Analyzer t

[2] t.Loop();

**Note:** you can ignore these warnings:

Warning in <TClass::Init>: no dictionary for class edm::Hash<1> is available

Warning in <TClass::Init>: no dictionary for class edm::ParameterSetBlob is available

Warning in <TClass::Init>: no dictionary for class edm::ProcessHistory is available

Warning in <TClass::Init>: no dictionary for class edm::ProcessConfiguration is available

Warning in <TClass::Init>: no dictionary for class pair<edm::Hash<1>,edm::ParameterSetBlob> is available

# What is the output?
- After running this analysis, one can see a dataset output called "RPC_output.root".
- Here you will find all histograms created in analysis code "RPC_Analyzer.C". 
- You may also find some histograms in png format. 

# Additional information

- The run number associated with this dataset is 367553 and the corresponding energy is 900GeV.

- Both RecHit and clustersize histograms are associated with muons.
