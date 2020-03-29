//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSourceManager.h>

#import <PhotosUICore/PXAssetEditOperationManagerObserver-Protocol.h>
#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class PHAsset, PXAssetEditOperationManager, PXAssetVariationsDataSource;

@interface PXAssetVariationsDataSourceManager : PXSectionedDataSourceManager <PXPhotoLibraryUIChangeObserver, PXAssetEditOperationManagerObserver>
{
    struct {
        BOOL pendingVariationType;
        BOOL currentVariationType;
        BOOL dataSource;
    } _needsUpdateFlags;
    BOOL _didCreateInitialDataSource;
    PHAsset *_asset;
    PXAssetEditOperationManager *_editOperationManager;
    PHAsset *_currentAsset;
    long long _pendingVariationType;
    long long _currentVariationType;
}

@property(nonatomic) long long currentVariationType; // @synthesize currentVariationType=_currentVariationType;
@property(nonatomic) long long pendingVariationType; // @synthesize pendingVariationType=_pendingVariationType;
@property(retain, nonatomic) PHAsset *currentAsset; // @synthesize currentAsset=_currentAsset;
@property(readonly, nonatomic) PXAssetEditOperationManager *editOperationManager; // @synthesize editOperationManager=_editOperationManager;
@property(readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
// - (void).cxx_destruct;
- (void)assetEditOperationManager:(id)arg1 didChangeEditOperationsPerformedOnAsset:(id)arg2 context:(void )arg3;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (void)_assetEditOperationsDidChange;
- (void)_updateDataSourceIfNeeded;
- (void)_invalidateDataSource;
- (void)_updateCurrentVariationTypeIfNeeded;
- (void)_invalidateCurrentVariationType;
- (void)_updatePendingVariationTypeIfNeeded;
- (void)_invalidatePendingVariationType;
- (void)_updateIfNeeded;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (id)_variationOptionWithType:(long long)arg1 asset:(id)arg2;
- (id)initWithAsset:(id)arg1 editOperationManager:(id)arg2;
- (id)init;
@property(readonly, nonatomic) PXAssetVariationsDataSource *dataSource;
- (void)didPerformChanges;

@end
