//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetalTools/MTLCommandBuffer-Protocol.h>

@class MTLRenderPassDescriptor, NSDictionary, NSMutableDictionary;
@protocol MTLComputeCommandEncoder, MTLDebugCommandEncoder, MTLEvent, MTLFragmentRenderCommandEncoder, MTLHeap, MTLRenderCommandEncoder, MTLResource;

@protocol MTLCommandBufferSPI <MTLCommandBuffer>
@property(readonly, nonatomic) NSMutableDictionary *userDictionary;
@property(readonly) NSDictionary *profilingResults;
@property(getter=isProfilingEnabled) BOOL profilingEnabled;
- (void)addPurgedHeap:(id <MTLHeap>)arg1;
- (void)addPurgedResource:(id <MTLResource>)arg1;

@optional
@property(readonly) NSUInteger globalTraceObjectID;
@property(nonatomic, getter=getListIndex) NSUInteger listIndex;
- (void)encodeCacheHintFinalize:(NSUInteger)arg1 resourceGroups:(const id )arg2 count:(NSUInteger)arg3;
- (void)encodeCacheHintTag:(NSUInteger)arg1 resourceGroups:(const id )arg2 count:(NSUInteger)arg3;
- (void)dropResourceGroups:(const id )arg1 count:(NSUInteger)arg2;
- (void)setResourceGroups:(const id )arg1 count:(NSUInteger)arg2;
- (void)encodeWaitForEvent:(id <MTLEvent>)arg1 value:(NSUInteger)arg2 timeout:(unsigned int)arg3;
- (NSUInteger)protectionOptions;
- (void)setProtectionOptions:(NSUInteger)arg1;
- (BOOL)commitAndWaitUntilSubmitted;
- (void)commitAndHold;
- (id <MTLFragmentRenderCommandEncoder>)sampledFragmentRenderCommandEncoderWithDescriptor:(MTLRenderPassDescriptor *)arg1 programInfoBuffer:(CDStruct_4af8c268 )arg2 capacity:(NSUInteger)arg3;
- (id <MTLFragmentRenderCommandEncoder>)fragmentRenderCommandEncoderWithDescriptor:(MTLRenderPassDescriptor *)arg1;
- (id <MTLDebugCommandEncoder>)debugCommandEncoder;
- (id <MTLComputeCommandEncoder>)sampledComputeCommandEncoderWithDispatchType:(NSUInteger)arg1 programInfoBuffer:(CDStruct_4af8c268 )arg2 capacity:(NSUInteger)arg3;
- (id <MTLComputeCommandEncoder>)sampledComputeCommandEncoderWithProgramInfoBuffer:(CDStruct_4af8c268 )arg1 capacity:(NSUInteger)arg2;
- (id <MTLRenderCommandEncoder>)sampledRenderCommandEncoderWithDescriptor:(MTLRenderPassDescriptor *)arg1 programInfoBuffer:(CDStruct_4af8c268 )arg2 capacity:(NSUInteger)arg3;
- (void )debugBufferContentsWithLength:(NSUInteger )arg1;
@end
