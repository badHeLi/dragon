//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUCenterFillOBWelcomeController.h>

@class UIImage, UIImageView;

@interface HUImageOBWelcomeController : HUCenterFillOBWelcomeController
{
    UIImageView *_contentImageView;
}

@property(readonly, nonatomic) UIImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
// - (void).cxx_destruct;
- (void)_updateContentMode;
- (void)_viewDidUpdateContent;
- (double)_contentAspectRatio;
@property(retain, nonatomic) UIImage *contentImage;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentView:(id)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentImage:(id)arg4;

@end
