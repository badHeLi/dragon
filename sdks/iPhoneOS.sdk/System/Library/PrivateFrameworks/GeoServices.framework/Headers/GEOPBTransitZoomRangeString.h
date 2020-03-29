//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>


@class NSString, PBDataReader, PBUnknownFields;

@interface GEOPBTransitZoomRangeString : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_labelLanguage;
    NSString *_labelText;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
//     struct os_unfair_lock_s _readerLock;
    unsigned int _minZoom;
    struct {
        unsigned int has_minZoom:1;
        unsigned int read_unknownFields:1;
        unsigned int read_labelLanguage:1;
        unsigned int read_labelText:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_labelLanguage:1;
        unsigned int wrote_labelText:1;
        unsigned int wrote_minZoom:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
// - (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(retain, nonatomic) NSString *labelText;
@property(readonly, nonatomic) BOOL hasLabelText;
- (void)_readLabelText;
@property(retain, nonatomic) NSString *labelLanguage;
@property(readonly, nonatomic) BOOL hasLabelLanguage;
- (void)_readLabelLanguage;
@property(nonatomic) BOOL hasMinZoom;
@property(nonatomic) unsigned int minZoom;
- (id)initWithData:(id)arg1;
- (id)init;

@end
