import FWCore.ParameterSet.Config as cms

process = cms.Process("NANO")
process.maxEvents = cms.untracked.PSet(input = cms.untracked.int32(10))
process.source = cms.Source("PoolSource",fileNames=cms.untracked.vstring())


process.source.fileNames = [
"/store/mc/RunIISummer20UL18NanoAODv9/WJetsToLNu_TuneCP5_13TeV-amcatnloFXFX-pythia8/NANOAODSIM/106X_upgrade2018_realistic_v16_L1v1-v2/2540000/10995124-9BEC-5A48-8D83-30542D27979D.root"
]
