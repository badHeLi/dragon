//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface SBGradientView : UIView
{
    NSArray *_colors;
}

+ (Class)layerClass;
@property(copy, nonatomic) NSArray *colors; // @synthesize colors=_colors;
// - (void).cxx_destruct;
@property CGPoint endPoint;
@property CGPoint startPoint;
@property(copy, nonatomic) NSArray *locations;
- (id)color;

@end
