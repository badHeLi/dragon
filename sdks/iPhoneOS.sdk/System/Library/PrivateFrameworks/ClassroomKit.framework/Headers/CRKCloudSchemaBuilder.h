//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKCloudZoneSyncDelegate-Protocol.h>

@class CKContainer, CKRecordZoneID, CRKCloudZoneSyncEngine, CRKFileBasedKeyedDataStore, NSSet;

@interface CRKCloudSchemaBuilder : NSObject <CRKCloudZoneSyncDelegate>
{
    NSSet *_cloudStoringClasses;
    CKContainer *_container;
    CRKFileBasedKeyedDataStore *_store;
    CRKCloudZoneSyncEngine *_syncEngine;
    CKRecordZoneID *_zoneId;
}

@property(retain, nonatomic) CKRecordZoneID *zoneId; // @synthesize zoneId=_zoneId;
@property(retain, nonatomic) CRKCloudZoneSyncEngine *syncEngine; // @synthesize syncEngine=_syncEngine;
@property(retain, nonatomic) CRKFileBasedKeyedDataStore *store; // @synthesize store=_store;
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
@property(retain, nonatomic) NSSet *cloudStoringClasses; // @synthesize cloudStoringClasses=_cloudStoringClasses;
// - (void).cxx_destruct;
- (void)processRemoteDelta:(id)arg1 fromZoneSyncEngine:(id)arg2;
- (void)didReceiveCloudError:(id)arg1 fromZoneSyncEngine:(id)arg2;
- (BOOL)cleanupFiles;
- (void)cleanupRecordZoneWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)skeletonRecordsForClass:(Class)arg1;
- (void)cleanupWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)buildSchemaWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)initWithCloudSyncingClasses:(id)arg1 container:(id)arg2 store:(id)arg3;

@end
