/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
 */

@interface PSYOptions : NSObject <NSSecureCoding> {
    NSURL *_activityInfoDirectory;
    BOOL _dryRun;
    NSArray *_jobs;
    BOOL _resetDeviceSyncState;
    BOOL _resumePendingJobs;
    unsigned int _syncSessionType;
    unsigned int _terminationJobCount;
    NSArray *_testInputs;
}

@property (nonatomic, copy) NSURL *activityInfoDirectory;
@property (nonatomic) BOOL dryRun;
@property (nonatomic, copy) NSArray *jobs;
@property (getter=shouldResetDeviceSyncState, nonatomic) BOOL resetDeviceSyncState;
@property (getter=shouldResumePendingJobs, nonatomic) BOOL resumePendingJobs;
@property (nonatomic) unsigned int syncSessionType;
@property (nonatomic) unsigned int terminationJobCount;
@property (nonatomic, copy) NSArray *testInputs;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activityInfoDirectory;
- (id)description;
- (BOOL)dryRun;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)jobs;
- (void)setActivityInfoDirectory:(id)arg1;
- (void)setDryRun:(BOOL)arg1;
- (void)setJobs:(id)arg1;
- (void)setResetDeviceSyncState:(BOOL)arg1;
- (void)setResumePendingJobs:(BOOL)arg1;
- (void)setSyncSessionType:(unsigned int)arg1;
- (void)setTerminationJobCount:(unsigned int)arg1;
- (void)setTestInputs:(id)arg1;
- (BOOL)shouldResetDeviceSyncState;
- (BOOL)shouldResumePendingJobs;
- (unsigned int)syncSessionType;
- (unsigned int)terminationJobCount;
- (id)testInputs;

@end
