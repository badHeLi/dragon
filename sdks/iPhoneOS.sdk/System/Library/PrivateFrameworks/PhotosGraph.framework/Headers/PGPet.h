//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphIngestPet-Protocol.h>

@class NSMutableSet;

@interface PGPet : NSObject <PGGraphIngestPet>
{
    NSMutableSet *_momentNodes;
    NSMutableSet *_ownerNodes;
}

@property(readonly, nonatomic) NSMutableSet *ownerNodes; // @synthesize ownerNodes=_ownerNodes;
@property(readonly, nonatomic) NSMutableSet *momentNodes; // @synthesize momentNodes=_momentNodes;
// - (void).cxx_destruct;
- (id)initWithMomentNodes:(id)arg1 ownerNodes:(id)arg2;

@end
