//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppStoreDaemon/ASDRequestOptions.h>

@class NSArray;

@interface ASDIAPInfoRequestOptions : ASDRequestOptions
{
    NSArray *_adamIds;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSArray *adamIds; // @synthesize adamIds=_adamIds;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithAdamIds:(id)arg1;

@end
