//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/IKAppDocumentDelegate-Protocol.h>
#import <StoreKitUI/SKUIStatusOverlayProvider-Protocol.h>

@class IKAppDocument, NSHashTable, NSOperationQueue, SKUIClientContext, SUAudioPlayer;

__attribute__((visibility("hidden")))
@interface SKUIPreviewDocumentController : NSObject <IKAppDocumentDelegate, SKUIStatusOverlayProvider>
{
    SUAudioPlayer *_audioPlayer;
    SKUIClientContext *_clientContext;
    IKAppDocument *_document;
    NSOperationQueue *_operationQueue;
    NSHashTable *_viewControllers;
}

@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
// - (void).cxx_destruct;
- (void)_reloadViewControllersWithPreviewStatus:(id)arg1 animated:(BOOL)arg2;
- (id)_operationQueue;
- (void)_connectToAudioPlayer;
- (void)_playerSessionsDidChangeNotification:(id)arg1;
- (void)_audioPlayerStatusChangeNotification:(id)arg1;
- (id)overlayViewControllerWithBackgroundStyle:(long long)arg1;
- (void)documentNeedsUpdate:(id)arg1;
- (void)documentDidUpdate:(id)arg1;
@property(readonly, nonatomic, getter=isPreviewActive) BOOL previewActive;
- (void)dealloc;
- (id)initWithDocument:(id)arg1;

@end
