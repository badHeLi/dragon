//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDProcessStateObserver-Protocol.h>

@class HDDaemon, NSMutableArray, NSMutableDictionary;
@protocol HDQueryManagerUnitTestDelegate, OS_dispatch_queue;

@interface HDQueryManager : NSObject <HDProcessStateObserver, HDDiagnosticObject>
{
//     struct os_unfair_lock_s _lock;
    NSMutableDictionary *_queryServersByUUID;
    NSMutableDictionary *_queryCollectionsByProcessBundleIdentifier;
    NSMutableArray *_pendingDatabaseAccessBlocks;
    NSMutableArray *_executingDatabaseAccessBlocks;
    long long _countOfExecutingThrottledDatabaseAccessBlocks;
    long long _unitTest_suspendCount;
    HDDaemon *_daemon;
    NSObject<OS_dispatch_queue> *_unitTest_delegateQueue;
    id <HDQueryManagerUnitTestDelegate> _unitTest_delegate;
}

@property __weak id <HDQueryManagerUnitTestDelegate> unitTest_delegate; // @synthesize unitTest_delegate=_unitTest_delegate;
@property(retain) NSObject<OS_dispatch_queue> *unitTest_delegateQueue; // @synthesize unitTest_delegateQueue=_unitTest_delegateQueue;
@property(readonly, nonatomic) __weak HDDaemon *daemon; // @synthesize daemon=_daemon;
// - (void).cxx_destruct;
- (void)_performAsyncWithUnitTestDelegate:(id /* CDUnknownBlockType */)arg1;
- (void)unitTest_suspendWithCount:(NSUInteger)arg1;
- (void)logDiagnostics;
- (id)diagnosticDescription;
- (void)_lock_handleClientStateChangeWithQueryCollection:(id)arg1;
- (void)processWithBundleIdentifier:(id)arg1 didTransitionFromState:(unsigned int)arg2 toState:(unsigned int)arg3;
- (void)_logQueryActivationWithServer:(id)arg1;
- (id)_lock_foregroundBundleIdentifiers;
- (id)_lock_queryCollectionForBundleIdentifier:(id)arg1 createIfNecessary:(BOOL)arg2;
- (void)_lock_unregisterQueryServer:(id)arg1;
- (id)_lock_registerQueryServer:(id)arg1 bundleIdentifier:(id)arg2;
- (void)_queryServerDidFinish:(id)arg1;
- (id)_lock_registerQueryServer:(id)arg1 error:(id )arg2;
- (BOOL)_lock_canDequeueBlock:(id)arg1;
- (id)_lock_dequeueNextDatabaseAccessBlock;
- (void)_didExecuteDatabaseAccessBlock:(id)arg1;
- (void)_lock_willExecuteDatabaseAccessBlock:(id)arg1;
- (void)_lock_executeDatabaseAccessBlocks;
- (void)scheduleDatabaseAccessForQueryServer:(id)arg1 block:(id /* CDUnknownBlockType */)arg2;
- (void)_lock_startQueryServer:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)startQueryServer:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)dealloc;
- (id)initWithDaemon:(id)arg1;

@end
