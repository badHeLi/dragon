//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileAsset/MAAsset.h>

@interface MAAsset (SUS)
- (BOOL)purge;
- (BOOL)cancelDownload;
- (void)cleanupAsset;
- (void)cancelDownloadIfNecessary;
- (BOOL)isEmergencyUpdate;
- (BOOL)isInstalled;
- (BOOL)isDownloading;
- (BOOL)isDownloadingOrInstalled;
@end
