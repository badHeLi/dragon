//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <SearchUI/SearchUIKeyboardableNavigationProtocol-Protocol.h>

@class NSArray, SearchUIDragSource, SearchUIRowModel, UIView, UIViewController;
@protocol SearchUIFeedbackDelegateInternal, SearchUIResultShortLook;

@interface SearchUITableViewCell : UITableViewCell <SearchUIKeyboardableNavigationProtocol>
{
    BOOL _isExpanded;
    SearchUIRowModel *_rowModel;
    UIView *_platterView;
    id <SearchUIFeedbackDelegateInternal> _delegate;
    UIView *_sizingContainer;
    SearchUIDragSource *_dragSource;
    UIViewController<SearchUIResultShortLook> *_shortLookViewController;
}

+ (double)distanceToTopOfAppIconsForMultiResultCell;
+ (BOOL)canCellExpandWithResults:(id)arg1 forView:(id)arg2;
+ (id)reuseIdentifierForResult:(id)arg1;
+ (id)cellViewForRowModel:(id)arg1 feedbackDelegate:(id)arg2;
@property(nonatomic) __weak UIViewController<SearchUIResultShortLook> *shortLookViewController; // @synthesize shortLookViewController=_shortLookViewController;
@property(retain, nonatomic) SearchUIDragSource *dragSource; // @synthesize dragSource=_dragSource;
@property(retain, nonatomic) UIView *sizingContainer; // @synthesize sizingContainer=_sizingContainer;
@property(nonatomic) __weak id <SearchUIFeedbackDelegateInternal> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) BOOL isExpanded; // @synthesize isExpanded=_isExpanded;
@property(retain, nonatomic) UIView *platterView; // @synthesize platterView=_platterView;
@property(retain, nonatomic) SearchUIRowModel *rowModel; // @synthesize rowModel=_rowModel;
// - (void).cxx_destruct;
- (void)removeKeyboardHandler;
- (BOOL)navigateKeyboardDown;
- (BOOL)navigateKeyboardUp;
- (BOOL)navigateKeyboardRight;
- (void)returnKeyPressed;
- (BOOL)navigateKeyboardLeft;
- (void)setupKeyboardHandler;
- (BOOL)canSetupKeyboardHandler;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)systemLayoutSizeFittingSize:(CGSize)arg1;
- (CGSize)intrinsicContentSize;
- (void)updateChevronVisible:(BOOL)arg1 leaveSpaceForChevron:(BOOL)arg2;
@property(readonly) BOOL shouldDrawBackgroundColor;
- (BOOL)isExpandable;
- (BOOL)supportsRecycling;
- (void)updateExpanded:(BOOL)arg1;
- (void)updateWithResults:(id)arg1;
- (void)_setAnimating:(BOOL)arg1 clippingAdjacentCells:(BOOL)arg2;
- (void)_updateHighlightColorsForView:(id)arg1 highlighted:(BOOL)arg2;
- (void)_setSeparatorDrawsInVibrantLightMode:(BOOL)arg1;
- (void)_setSeparatorBackdropOverlayBlendMode:(long long)arg1;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;
@property(readonly) NSArray *visibleResults;
- (void)updateWithRowModel:(id)arg1;
- (void)updateWithResult:(id)arg1;
- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;
- (id)init;

@end
