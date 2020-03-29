//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoMailKitServer/NNMKHTMLParser.h>

@class NSDataDetector, NSLock, NSMutableAttributedString, NSMutableDictionary;

@interface NNMKContentAttributedStringHTMLParser : NNMKHTMLParser
{
    NSLock *_lock;
    NSMutableAttributedString *_parsedAttributedString;
    NSUInteger _maxLength;
    double _maxImageWidth;
    BOOL _partiallyParsed;
    NSMutableDictionary *_imageAtachmentsDataByContentId;
    NSDataDetector *_dataDetector;
}

+ (CGSize)_scaledDownSize:(CGSize)arg1 maxWidth:(double)arg2;
+ (id)_scaleAndPrepareImageForClient:(id)arg1 maxWidth:(double)arg2 screenScale:(double)arg3;
+ (id)trimAttributedString:(id)arg1;
+ (id)adjustedImage:(id)arg1 maxWidth:(double)arg2 screenScale:(double)arg3;
+ (id)imageAttachmentAttributedStringWithContentId:(id)arg1 imageSize:(CGSize)arg2 mergingAttributes:(id)arg3;
+ (id)attachmentAttributedStringWithContentId:(id)arg1 mergingAttributes:(id)arg2;
@property(retain, nonatomic) NSDataDetector *dataDetector; // @synthesize dataDetector=_dataDetector;
@property(retain, nonatomic) NSMutableDictionary *imageAtachmentsDataByContentId; // @synthesize imageAtachmentsDataByContentId=_imageAtachmentsDataByContentId;
@property(nonatomic) BOOL partiallyParsed; // @synthesize partiallyParsed=_partiallyParsed;
@property(nonatomic) double maxImageWidth; // @synthesize maxImageWidth=_maxImageWidth;
@property(nonatomic) NSUInteger maxLength; // @synthesize maxLength=_maxLength;
@property(retain, nonatomic) NSMutableAttributedString *parsedAttributedString; // @synthesize parsedAttributedString=_parsedAttributedString;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
// - (void).cxx_destruct;
- (BOOL)isWebLink:(id)arg1;
- (BOOL)_validateURLsAndHTMLTagsInParsedString:(id)arg1 urlsFound:(id )arg2;
- (void)_addDataDetectionAttributes:(id)arg1;
- (void)appendString:(id)arg1 stringAttributes:(id)arg2;
- (void)appendImageWithSource:(id)arg1 width:(double)arg2 height:(double)arg3 stringAttributes:(id)arg4;
- (BOOL)isElementIgnorable:(id)arg1;
- (BOOL)isErrorTypeBlacklisted:(char )arg1;
- (BOOL)isElementBlacklisted:(id)arg1 attributeQueryBlock:(id /* CDUnknownBlockType */)arg2;
- (id)_parseHTMLBody:(id)arg1 encoding:(NSUInteger)arg2 maxLength:(NSUInteger)arg3 maxImageWidth:(double)arg4 partiallyParsed:(BOOL )arg5 imageAttachmentsLoaded:(id )arg6 urlsForValidation:(id)arg7 urlsFound:(id )arg8;
- (id)parseHTMLBody:(id)arg1 encoding:(NSUInteger)arg2 maxLength:(NSUInteger)arg3 maxImageWidth:(double)arg4 partiallyParsed:(BOOL )arg5 imageAttachmentsLoaded:(id )arg6 urlsForValidation:(id)arg7;
- (id)parseHTMLBody:(id)arg1 encoding:(NSUInteger)arg2 maxLength:(NSUInteger)arg3 maxImageWidth:(double)arg4 partiallyParsed:(BOOL )arg5 imageAttachmentsLoaded:(id )arg6 urlsFound:(id )arg7;

@end
