//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Network/NWPrettyDescription-Protocol.h>

@class NSString;
@protocol OS_nw_interface;

@interface NWInterface : NSObject <NWPrettyDescription, NSSecureCoding, NSCopying>
{
    NSObject<OS_nw_interface> *_internalInterface;
}

+ (id)interfaceWithProtocolBufferData:(id)arg1;
+ (id)descriptionForSubtype:(long long)arg1;
+ (id)descriptionForType:(long long)arg1;
+ (BOOL)supportsSecureCoding;
@property(retain) NSObject<OS_nw_interface> *internalInterface; // @synthesize internalInterface=_internalInterface;
// - (void).cxx_destruct;
- (id)createProtocolBufferObject;
@property(readonly, nonatomic) NSString *typeString;
- (BOOL)isDeepEqual:(id)arg1;
- (BOOL)isShallowEqual:(id)arg1;
- (id)ipv4Broadcast;
- (id)ipv4Netmask;
@property(readonly, nonatomic) NWInterface *delegateInterface;
@property(readonly, nonatomic) NSUInteger generation;
@property(readonly, nonatomic) long long mtu;
@property(readonly, nonatomic, getter=isConstrained) BOOL constrained;
@property(readonly, nonatomic, getter=isExpensive) BOOL expensive;
@property(readonly, nonatomic) long long subtype;
@property(readonly, nonatomic) long long type;
@property(readonly, nonatomic) NSUInteger interfaceIndex;
@property(readonly, nonatomic) NSString *interfaceName;
@property(readonly, copy, nonatomic) NSString *privateDescription;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 showFullContent:(BOOL)arg2;
- (id)initWithInterfaceIndex:(NSUInteger)arg1;
- (id)initWithInterfaceName:(id)arg1;
- (id)initWithInterface:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterfaceIndex:(NSUInteger)arg1 interfaceName:(id)arg2;

@end
