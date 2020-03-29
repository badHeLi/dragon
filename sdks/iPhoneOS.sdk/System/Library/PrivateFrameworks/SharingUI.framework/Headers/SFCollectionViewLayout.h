//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSArray;
@protocol SFCollectionViewDelegateLayout;

__attribute__((visibility("hidden")))
@interface SFCollectionViewLayout : UICollectionViewLayout
{
    id <SFCollectionViewDelegateLayout> _fallbackDelegate;
    double _evaluatedHorizontalItemOffset;
    NSArray *_preparedLayoutAttributes;
    NSArray *_preparedUpdateItems;
    CGSize _evaluatedItemSize;
    CGSize _evaluatedContentSize;
    UIEdgeInsets _evaluatedInset;
}

@property(copy, nonatomic) NSArray *preparedUpdateItems; // @synthesize preparedUpdateItems=_preparedUpdateItems;
@property(copy, nonatomic) NSArray *preparedLayoutAttributes; // @synthesize preparedLayoutAttributes=_preparedLayoutAttributes;
@property(nonatomic) double evaluatedHorizontalItemOffset; // @synthesize evaluatedHorizontalItemOffset=_evaluatedHorizontalItemOffset;
@property(nonatomic) CGSize evaluatedContentSize; // @synthesize evaluatedContentSize=_evaluatedContentSize;
@property(nonatomic) CGSize evaluatedItemSize; // @synthesize evaluatedItemSize=_evaluatedItemSize;
@property(nonatomic) UIEdgeInsets evaluatedInset; // @synthesize evaluatedInset=_evaluatedInset;
@property(nonatomic) __weak id <SFCollectionViewDelegateLayout> fallbackDelegate; // @synthesize fallbackDelegate=_fallbackDelegate;
// - (void).cxx_destruct;
- (void)invalidateGroupViewLayoutAnimated:(BOOL)arg1;
- (id)_layoutAttributesForItemAtIndexPath:(id)arg1 numberOfItemsInSection:(NSUInteger)arg2;
- (BOOL)_shouldScrollToContentBeginningInRightToLeft;
- (double)_evaluateHorizontalItemOffsetForItemSize:(CGSize)arg1 inset:(UIEdgeInsets)arg2 containerWidth:(double)arg3 offscreenPeekInFactor:(float)arg4;
- (id)_indexPathsForItemsInSection:(long long)arg1;
- (UIEdgeInsets)_evaluateInsetForSectionAtIndex:(long long)arg1;
- (CGSize)_evaluatePreferredItemSizeForItemsAtIndexPaths:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
- (CGSize)collectionViewContentSize;
- (BOOL)shouldReverseLayoutDirection;
- (void)prepareLayout;
- (void)calculateLayoutValuesForIndexPaths:(id)arg1 containerWidth:(double)arg2;
- (CGPoint)firstItemCenterForContainerWidth:(double)arg1;
- (id)init;

@end
