//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXGadgetUIViewController.h>

@class PXMessagesGadgetDataSourceManager;

@interface PXMessagesRootGadgetViewController : PXGadgetUIViewController
{
    PXMessagesGadgetDataSourceManager *_messagesDataSourceManager;
}

+ (Class)gadgetSpecClass;
@property(readonly, nonatomic) PXMessagesGadgetDataSourceManager *messagesDataSourceManager; // @synthesize messagesDataSourceManager=_messagesDataSourceManager;
// - (void).cxx_destruct;
- (void)prepareForPresentationStyle:(long long)arg1;
@property(nonatomic) double recentPhotosHeight;
- (void)viewDidLoad;
- (id)initWithGadgetDataSourceManager:(id)arg1;

@end
