//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel;
@protocol CKBusinessInfoViewDelegate;

__attribute__((visibility("hidden")))
@interface CKBusinessInfoView : UIView
{
    id <CKBusinessInfoViewDelegate> _delegate;
    NSString *_descriptionText;
    long long _layoutType;
    UILabel *_descriptionTextLabel;
    UIButton *_infoButton;
}

@property(retain, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
@property(retain, nonatomic) UILabel *descriptionTextLabel; // @synthesize descriptionTextLabel=_descriptionTextLabel;
@property(nonatomic) long long layoutType; // @synthesize layoutType=_layoutType;
@property(retain, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(nonatomic) __weak id <CKBusinessInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)infoButtonTapped:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)setup;
- (id)initWithLayoutType:(long long)arg1;

@end
