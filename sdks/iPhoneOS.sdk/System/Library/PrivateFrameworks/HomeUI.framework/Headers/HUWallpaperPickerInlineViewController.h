//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <HomeUI/HUWallpaperPhotoCellDelegate-Protocol.h>

@class HFWallpaper, HUWallpaperPhotoCell, NSArray, NSIndexPath, NSMutableDictionary, UICollectionViewFlowLayout, UIDropInteraction, UIImage, UIImagePickerController;
@protocol HUWallpaperPickerInlineViewControllerDelegate;

@interface HUWallpaperPickerInlineViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout, HUWallpaperPhotoCellDelegate, UIDropInteractionDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate>
{
    NSArray *_namedWallpapers;
    double _preferedHeight;
    UIImage *_originalCustomImage;
    id <HUWallpaperPickerInlineViewControllerDelegate> _delegate;
    NSMutableDictionary *_imageCache;
    UIImagePickerController *_imagePicker;
    HUWallpaperPhotoCell *_customWallpaperCell;
    UICollectionViewFlowLayout *_flowLayout;
    HFWallpaper *_customWallpaper;
    UIDropInteraction *_dropInteraction;
    NSIndexPath *_selectedIndexPath;
    NSUInteger _numberOfWallpapersFittingInWidth;
    CGSize _imageSize;
}

+ (BOOL)useWallpaperPickerCell;
@property(nonatomic) NSUInteger numberOfWallpapersFittingInWidth; // @synthesize numberOfWallpapersFittingInWidth=_numberOfWallpapersFittingInWidth;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) UIDropInteraction *dropInteraction; // @synthesize dropInteraction=_dropInteraction;
@property(retain, nonatomic) HFWallpaper *customWallpaper; // @synthesize customWallpaper=_customWallpaper;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) HUWallpaperPhotoCell *customWallpaperCell; // @synthesize customWallpaperCell=_customWallpaperCell;
@property(retain, nonatomic) UIImagePickerController *imagePicker; // @synthesize imagePicker=_imagePicker;
@property(retain, nonatomic) NSMutableDictionary *imageCache; // @synthesize imageCache=_imageCache;
@property(nonatomic) __weak id <HUWallpaperPickerInlineViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImage *originalCustomImage; // @synthesize originalCustomImage=_originalCustomImage;
@property(readonly, nonatomic) double preferedHeight; // @synthesize preferedHeight=_preferedHeight;
@property(retain, nonatomic) NSArray *namedWallpapers; // @synthesize namedWallpapers=_namedWallpapers;
@property(nonatomic) CGSize imageSize; // @synthesize imageSize=_imageSize;
// - (void).cxx_destruct;
- (void)updateScrolling;
- (id)wallpaperForIndexPath:(id)arg1;
@property(readonly) HFWallpaper *selectedWallpaper;
@property(readonly) NSUInteger numberOfWallpapers;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)wallpaperPhotoCellDidPressDeleteButton:(id)arg1;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)configureCell:(id)arg1 image:(id)arg2 wallpaper:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setSelectedIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)setSelectedWallpaper:(id)arg1 animated:(BOOL)arg2;
- (void)setImageSizeToFitWidth:(double)arg1 forNumberOfWallpapers:(NSUInteger)arg2;
- (void)setCustomWallpaper:(id)arg1 image:(id)arg2;
- (CGSize)preferredContentSize;
- (void)viewDidLoad;
- (id)init;

@end
