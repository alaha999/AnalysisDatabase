from WMCore.Configuration import Configuration
from CRABClient.UserUtilities import config

config = config()

#datetime object
import datetime
timestamp = datetime.datetime.now().strftime("_%Y%m%d_%H%M%S")


config.General.requestName = 'RDataFrameJob'
config.General.workArea = 'NanoRDF_'+timestamp
config.General.transferOutputs = True
config.General.transferLogs = True

config.JobType.pluginName = 'Analysis'
config.JobType.psetName = 'PSet.py'
config.JobType.scriptExe = 'crab_script.sh'
config.JobType.inputFiles = ['nanoRDF.py','FrameworkJobReport.xml']
config.JobType.outputFiles = ['ntuple_skim.root']

config.Data.inputDataset = "/DYTo2L_MLL-50_TuneCP5_13p6TeV_pythia8/Run3Summer22NanoAODv12-130X_mcRun3_2022_realistic_v5-v1/NANOAODSIM"
config.Data.inputDBS = 'global'
config.Data.splitting = 'FileBased'
config.Data.unitsPerJob = 3  # Number of files per job
config.Data.outLFNDirBase = '/store/user/alaha/nanoRDFjobs'
config.Data.publication = False
config.Data.outputDatasetTag = 'NanoRDF_'+timestamp

config.Site.storageSite = 'T3_CH_CERNBOX'
