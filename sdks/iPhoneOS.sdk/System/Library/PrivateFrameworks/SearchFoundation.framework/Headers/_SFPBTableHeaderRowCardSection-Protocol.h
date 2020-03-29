//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSData, NSDictionary, NSString, _SFPBColor, _SFPBFormattedText, _SFPBPunchout, _SFPBTableAlignmentSchema;

@protocol _SFPBTableHeaderRowCardSection <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) BOOL alignRowsToHeader;
@property(nonatomic) int verticalAlign;
@property(nonatomic) BOOL reducedRowHeight;
@property(copy, nonatomic) NSString *tabGroupIdentifier;
@property(nonatomic) BOOL isSubHeader;
@property(copy, nonatomic) NSArray *datas;
@property(retain, nonatomic) _SFPBTableAlignmentSchema *alignmentSchema;
@property(copy, nonatomic) NSString *tableIdentifier;
@property(retain, nonatomic) _SFPBColor *backgroundColor;
@property(nonatomic) int separatorStyle;
@property(copy, nonatomic) NSString *type;
@property(nonatomic) BOOL hasBottomPadding;
@property(nonatomic) BOOL hasTopPadding;
@property(nonatomic) BOOL canBeHidden;
@property(copy, nonatomic) NSString *punchoutPickerDismissText;
@property(copy, nonatomic) NSString *punchoutPickerTitle;
@property(copy, nonatomic) NSArray *punchoutOptions;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBFormattedText *)dataAtIndex:(NSUInteger)arg1;
- (NSUInteger)dataCount;
- (void)addData:(_SFPBFormattedText *)arg1;
- (void)clearData;
- (_SFPBPunchout *)punchoutOptionsAtIndex:(NSUInteger)arg1;
- (NSUInteger)punchoutOptionsCount;
- (void)addPunchoutOptions:(_SFPBPunchout *)arg1;
- (void)clearPunchoutOptions;
@end
