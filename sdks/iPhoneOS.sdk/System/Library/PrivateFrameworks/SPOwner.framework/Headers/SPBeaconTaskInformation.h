//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSDate, NSError, NSString, NSUUID;

@interface SPBeaconTaskInformation : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_name;
    NSDate *_lastUpdated;
    NSError *_error;
    long long _state;
    NSUUID *_commandIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSUUID *commandIdentifier; // @synthesize commandIdentifier=_commandIdentifier;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSDate *lastUpdated; // @synthesize lastUpdated=_lastUpdated;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithName:(id)arg1 lastUpdated:(id)arg2 error:(id)arg3 state:(long long)arg4;

@end
