//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSuggestionsInternals/SGDHarvestQueue.h>

@class NSObject, NSString, SGDHarvestQueueFileReader, SGDHarvestQueueFileWriter, SGDSqlHarvestQueueStore;
@protocol OS_dispatch_queue;

@interface SGDHarvestQueueOnDisk : SGDHarvestQueue
{
    NSString *_dirPath;
    SGDSqlHarvestQueueStore *_store;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_backingQueue;
    SGDHarvestQueueFileWriter *_writerHighPriority;
    SGDHarvestQueueFileWriter *_writerLowPriority;
    SGDHarvestQueueFileReader *_reader;
    long long _idCounter;
    _Atomic NSUInteger _count;
    _Atomic NSUInteger _countHighPriority;
    _Atomic NSUInteger _maxQueueItems;
    _Atomic NSUInteger _pendingWrites;
    _Atomic NSUInteger _maxPendingWrites;
    id _lockStateChangeToken;
}

// - (void).cxx_destruct;
- (void)writePermafail:(id)arg1;
- (void)_trimPermafailDirectory;
- (void)deleteWithItemId:(long long)arg1 fileId:(int)arg2;
- (void)_processPoppedItemResult:(CDStruct_7663941a)arg1 callback:(id /* CDUnknownBlockType */)arg2;
- (void)popBySourceKey:(id)arg1 messageId:(id)arg2 callback:(id /* CDUnknownBlockType */)arg3;
- (void)popByItemId:(long long)arg1 callback:(id /* CDUnknownBlockType */)arg2;
- (void)popHighPriority:(id /* CDUnknownBlockType */)arg1;
- (void)pop:(id /* CDUnknownBlockType */)arg1;
- (void)_read:(CDStruct_beb4cc23)arg1 fileId:(int)arg2 callback:(id /* CDUnknownBlockType */)arg3;
- (void)addItemWithSourceKey:(id)arg1 messageId:(id)arg2 highPriority:(BOOL)arg3 item:(id)arg4 callback:(id /* CDUnknownBlockType */)arg5;
- (void)_flushFilesWhileUnlocked;
- (void)_openFilesForProcessingWhileLocked;
- (void)_unlinkFileWithIdLocked:(int)arg1;
- (void)markAsFailedWithId:(long long)arg1;
- (void)_garbageCollectFilesAsync;
- (void)close;
@property(nonatomic) NSUInteger maxPendingWrites;
@property(nonatomic) NSUInteger maxQueueItems;
- (void)countHighPriorityItems:(NSUInteger )arg1 lowPriorityItems:(NSUInteger )arg2;
- (NSUInteger)count;
- (void)dealloc;
- (id)initWithDirectory:(id)arg1;

@end
