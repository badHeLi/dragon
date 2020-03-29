//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLPhotoStreamsHelper : NSObject
{
    BOOL _appHasPolledOnceThisForegroundSession;
}

+ (BOOL)canInitiateDistributedPhotoStreamDeletionForAssetUUID:(id)arg1;
+ (void)deletePhotoStreamAssetsWithLibraryServiceManager:(id)arg1 withReason:(id)arg2 jobStreamID:(id)arg3 completion:(id /* CDUnknownBlockType */)arg4;
+ (BOOL)writeBreadcrumbContent:(id)arg1 forHashString:(id)arg2;
+ (id)iCloudServiceAccount;
+ (BOOL)photoStreamsEnabledForPhotoLibraryURL:(id)arg1;
+ (BOOL)_photoStreamsEnabled;
+ (id)sharedPhotoStreamsHelper;
- (void)handleMPSStateIfNecessary;
- (void)fetchMPSStateWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)enumerateMasterHashesAndPublicGlobalUUIDsForAssets:(id)arg1 withBlock:(id /* CDUnknownBlockType */)arg2;
- (void)initiateDeletionOfOriginalAssets:(id)arg1;
- (void)initiateDeletionOfPhotoStreamAssets:(id)arg1;
- (void)resume_mstreamd:(id)arg1;
- (id)pause_mstreamd;
- (void)resetServerState;
- (void)cleanupPhotoStreamMetadataForAssetsWithUUIDs:(id)arg1 forStreamID:(id)arg2;
- (void)savePhotoStreamMetadata:(id)arg1 forAsset:(id)arg2;
- (id)pathToSavedMetadataForAssetHash:(id)arg1 streamID:(id)arg2 createIntermediateDirs:(BOOL)arg3;
- (id)derivedAssetForMasterAsset:(id)arg1;
- (CGSize)derivedAssetSizeForMasterSizeWidth:(double)arg1 height:(double)arg2;
- (id)temporaryPathForRecentlyUploadedAsset:(id)arg1;
- (id)temporaryPathForConvertedAssetWithUUID:(id)arg1;
- (long long)friendsLimit;
- (long long)imageLimitForFriendStream;
- (long long)imageLimitForOwnStream;
- (long long)maxPixelSizeForDerivative;
- (id)imageLimitsByAssetType;
- (long long)_serverIntegerLimitForKey:(id)arg1 debugDefaultKey:(id)arg2;
- (BOOL)shouldPublishScreenShots;
- (void)pollForNewSubscriptionContentOncePerAppForegroundSession;
- (void)pollForNewSubscriptionContent;
- (BOOL)dequeueAssetsForPSPublishing:(id)arg1;
- (BOOL)enqueueAssetForPSPublishing:(id)arg1 fullPath:(id)arg2 fileSize:(id)arg3 reenqueueCount:(NSUInteger)arg4 publicGlobalUUID:(id )arg5;
- (BOOL)isValidUploadAsset:(id)arg1 type:(id)arg2 fileSize:(id)arg3;
- (void)writeDidPublishBreadcrumbforHash:(id)arg1 imagePath:(id)arg2;
- (void)writeDidEnqueueBreadcrumbForHash:(id)arg1 imagePath:(id)arg2;
- (void)writeWillEnqueueBreadcrumbForHash:(id)arg1 imagePath:(id)arg2;
- (BOOL)removeBreadcrumbsForHashString:(id)arg1;
- (id)lastPhotoStreamUpdateDate;
- (id)psHashAsString:(id)arg1;
- (id)psHashForData:(id)arg1;
- (id)photoStreamsPublishStreamID;
- (void)_appDidEnterBackground:(id)arg1;
- (void)_clearPhotoStreamAccountSettings;
- (void)_accountStoreDidChange:(id)arg1;
- (void)clearCachedAccountState;
- (void)dealloc;
- (id)init;

@end
