//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/SKUIPassbookLoaderDelegate-Protocol.h>

@class NSOperationQueue, SKUIClientContext, SKUIPassbookLoader;
@protocol SKUIURLResolverDelegate, UINavigationControllerDelegate;

@interface SKUIURLResolver : NSObject <SKUIPassbookLoaderDelegate>
{
    SKUIClientContext *_clientContext;
    id <SKUIURLResolverDelegate> _delegate;
    id <UINavigationControllerDelegate> _navigationControllerDelegate;
    NSOperationQueue *_operationQueue;
    SKUIPassbookLoader *_passbookLoader;
}

+ (id)tabIdentifierForURL:(id)arg1;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) __weak id <UINavigationControllerDelegate> navigationControllerDelegate; // @synthesize navigationControllerDelegate=_navigationControllerDelegate;
@property(nonatomic) __weak id <SKUIURLResolverDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)_showViewControllerWithResponse:(id)arg1 fromOperation:(id)arg2;
- (void)_showSearchWithURL:(id)arg1;
- (void)_showRedeemViewControllerWithURL:(id)arg1;
- (void)_showPlaceholderViewController;
- (void)_showGiftViewControllerWithURL:(id)arg1;
- (void)_showDonationViewControllerWithURL:(id)arg1;
- (void)_showBagURLWithURL:(id)arg1;
- (void)_showAccountViewControllerWithURL:(id)arg1;
- (void)_sendDidFinishWithResult:(BOOL)arg1;
- (void)_selectTabWithIdentifier:(id)arg1;
- (void)_resolveURLRequest:(id)arg1 withOriginURL:(id)arg2;
- (void)_presentViewController:(id)arg1;
- (void)_performLookupWithURL:(id)arg1;
- (id)_newHTMLViewControllerWithSection:(id)arg1;
- (void)_handleSafariScriptDataUpdate:(id)arg1;
- (void)_addPassbookPassWithURL:(id)arg1;
- (id)presentationViewControllerForPassbookLoader:(id)arg1;
- (void)passbookLoaderDidFinish:(id)arg1;
- (void)resolveURL:(id)arg1;
- (void)dealloc;
- (id)initWithClientContext:(id)arg1;

@end
