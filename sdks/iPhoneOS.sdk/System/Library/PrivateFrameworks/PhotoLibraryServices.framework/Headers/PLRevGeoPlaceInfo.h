//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSString;

@interface PLRevGeoPlaceInfo : NSObject <NSSecureCoding>
{
    BOOL _hasArea;
    NSString *_placeName;
    double _minimumArea;
    double _maximumArea;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) double maximumArea; // @synthesize maximumArea=_maximumArea;
@property(readonly, nonatomic) double minimumArea; // @synthesize minimumArea=_minimumArea;
@property(readonly, nonatomic) BOOL hasArea; // @synthesize hasArea=_hasArea;
@property(readonly, copy, nonatomic) NSString *placeName; // @synthesize placeName=_placeName;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)addPlaceInfoArea:(double)arg1;
- (id)initWithPlaceName:(id)arg1;

@end
