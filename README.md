# Wellcome to this repository

////////------------------- Instruction for running this analysis script-----------/////////////

**A example using nanoAOD MuonDPGNtuples**

$ git clone https://github.com/Silas-SJ/RPC_Silas.git

# How to find the dataset?
For the analysis an ntuple in EOS is used, after logging into your lxplus account one can find the dataset in the path below:

/eos/cms/store/group/dpg_muon/MuonDPGNtuples/validation//MuDPGNtuple_nanoAOD_Run2033A_Express_900GeV_20230419.root


# How to run this analysis code - C++ (TTreReader based)?
$ root -b

[0].L RPC_Analyzer.C

[1]RPC_Analyzer()

**Note:** you can ignore these warnings:

Warning in <TClass::Init>: no dictionary for class edm::Hash<1> is available

Warning in <TClass::Init>: no dictionary for class edm::ParameterSetBlob is available

Warning in <TClass::Init>: no dictionary for class edm::ProcessHistory is available

Warning in <TClass::Init>: no dictionary for class edm::ProcessConfiguration is available

Warning in <TClass::Init>: no dictionary for class pair<edm::Hash<1>,edm::ParameterSetBlob> is availabl

# What is the output?
- After running this analysis, one can see a dataset output called "RPC_out.root".
- Here you will find all histograms created in analysis code "RPC_Analyzer.C". 
- You may also find some histograms in png format. 


# Additional information

- The run number associated with this dataset is 366035 and the corresponding energy is 900GeV.

- Both RecHit and clustersize histograms are associated with muons.
