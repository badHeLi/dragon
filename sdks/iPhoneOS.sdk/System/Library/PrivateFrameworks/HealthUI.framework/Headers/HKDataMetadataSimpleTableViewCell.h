//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface HKDataMetadataSimpleTableViewCell : UITableViewCell
{
    UILabel *_titleTextLabel;
    UILabel *_subtitleTextLabel;
}

@property(retain, nonatomic) UILabel *subtitleTextLabel; // @synthesize subtitleTextLabel=_subtitleTextLabel;
@property(retain, nonatomic) UILabel *titleTextLabel; // @synthesize titleTextLabel=_titleTextLabel;
// - (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setupConstraints;
- (void)layoutSubviews;
- (void)_updateForCurrentSizeCategory;
- (void)setupSubviews;
- (id)initWithReuseIdentifier:(id)arg1;

@end
