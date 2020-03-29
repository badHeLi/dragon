//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/PXPeopleSuggestionManagerDelegate-Protocol.h>
#import <PhotosUICore/PXPeopleSummaryDelegate-Protocol.h>

@class NSTimer, PXAnimatedHeaderView, PXPeopleConfirmationLoadingView, PXPeopleConfirmationSummaryViewController, PXPeopleSuggestionManager, PXPeopleSuggestionView, UIActivityIndicatorView, UILabel;

@interface PXPeopleConfirmationViewController : UIViewController <PXPeopleSuggestionManagerDelegate, PXPeopleSummaryDelegate>
{
    BOOL _suggestionsPresented;
    BOOL _showTypeDebugColor;
    PXPeopleSuggestionManager *_suggestionManager;
    PXPeopleSuggestionView *_suggestionView;
    PXAnimatedHeaderView *_headerView;
    UILabel *_descriptionLabel;
    UILabel *_interimLoadingLabel;
    UIActivityIndicatorView *_interimLoadingIndicator;
    NSUInteger _viewState;
    PXPeopleConfirmationLoadingView *_loadingView;
    PXPeopleConfirmationSummaryViewController *_summaryViewController;
    NSTimer *_loadingDelayTimer;
}

@property(nonatomic) BOOL showTypeDebugColor; // @synthesize showTypeDebugColor=_showTypeDebugColor;
@property(nonatomic) BOOL suggestionsPresented; // @synthesize suggestionsPresented=_suggestionsPresented;
@property(retain, nonatomic) NSTimer *loadingDelayTimer; // @synthesize loadingDelayTimer=_loadingDelayTimer;
@property(retain, nonatomic) PXPeopleConfirmationSummaryViewController *summaryViewController; // @synthesize summaryViewController=_summaryViewController;
@property(retain, nonatomic) PXPeopleConfirmationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) NSUInteger viewState; // @synthesize viewState=_viewState;
@property(retain, nonatomic) UIActivityIndicatorView *interimLoadingIndicator; // @synthesize interimLoadingIndicator=_interimLoadingIndicator;
@property(retain, nonatomic) UILabel *interimLoadingLabel; // @synthesize interimLoadingLabel=_interimLoadingLabel;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) PXAnimatedHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) PXPeopleSuggestionView *suggestionView; // @synthesize suggestionView=_suggestionView;
@property(readonly) PXPeopleSuggestionManager *suggestionManager; // @synthesize suggestionManager=_suggestionManager;
// - (void).cxx_destruct;
- (NSUInteger)autoConfirmedCountForSummaryViewController:(id)arg1;
- (NSUInteger)userConfirmedCountForSummaryViewController:(id)arg1;
- (id)personForSummaryViewController:(id)arg1;
- (void)willLoadMoreSuggestionsForSuggestionManager:(id)arg1;
- (void)noMoreSuggestionsAvailableForSuggestionManager:(id)arg1;
- (void)suggestionManager:(id)arg1 hasNewSuggestionsAvailable:(id)arg2;
- (void)confirmationCountUpdatedForSuggestionManager:(id)arg1 undoing:(BOOL)arg2;
- (void)cancelOperation:(id)arg1;
- (void)doneTapped:(id)arg1;
- (void)performUndo:(id)arg1;
- (void)undoDeny:(id)arg1;
- (void)undoConfirm:(id)arg1;
- (void)denyTapped:(id)arg1;
- (void)confirmTapped:(id)arg1;
- (void)suggestionDidDisplay;
@property(readonly) BOOL isSummaryViewShowing;
- (void)updateViewWithViewState:(NSUInteger)arg1;
- (void)dismissSummary;
- (void)displaySummary;
- (void)presentSuggestion:(id)arg1 animated:(BOOL)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (id)initWithPerson:(id)arg1;

@end
