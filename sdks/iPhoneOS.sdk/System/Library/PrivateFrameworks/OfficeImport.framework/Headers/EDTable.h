//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDCollection, EDReference, EDResources, NSString;

__attribute__((visibility("hidden")))
@interface EDTable : NSObject
{
    EDResources *mResources;
    NSUInteger mStyleIndex;
    NSUInteger mHeaderRowDxfIndex;
    NSUInteger mTotalsRowDxfIndex;
    NSUInteger mDataAreaDxfIndex;
    NSUInteger mHeaderRowBorderDxfIndex;
    NSUInteger mTotalsRowBorderDxfIndex;
    NSUInteger mDataAreaBorderDxfIndex;
    NSUInteger mTableBorderDxfIndex;
    NSString *mName;
    NSString *mDisplayName;
    EDReference *mTableRange;
    NSString *mStyleName;
    NSUInteger mHeaderRowCount;
    NSUInteger mTotalsRowCount;
    BOOL mShowFirstColumn;
    BOOL mShowLastColumn;
    BOOL mShowRowStripes;
    BOOL mShowColumnStripes;
    EDCollection *mTableColumns;
    EDCollection *mColumnFilters;
}

+ (id)tableWithResources:(id)arg1;
// - (void).cxx_destruct;
- (void)setTableRange:(id)arg1;
- (void)setShowColumnStripes:(BOOL)arg1;
- (BOOL)showColumnStripes;
- (void)setShowRowStripes:(BOOL)arg1;
- (BOOL)showRowStripes;
- (void)setShowLastColumn:(BOOL)arg1;
- (BOOL)showLastColumn;
- (void)setShowFirstColumn:(BOOL)arg1;
- (BOOL)showFirstColumn;
- (id)columnFilters;
- (id)tableColumns;
- (void)setTotalsRowCount:(NSUInteger)arg1;
- (NSUInteger)totalsRowCount;
- (void)setHeaderRowCount:(NSUInteger)arg1;
- (NSUInteger)headerRowCount;
- (id)tableRange;
- (void)setStyleName:(id)arg1;
- (id)styleName;
- (void)setDisplayName:(id)arg1;
- (id)displayName;
- (void)setName:(id)arg1;
- (id)name;
- (void)setTableBorderDxf:(id)arg1;
- (id)tableBorderDxf;
- (void)setDataAreaBorderDxf:(id)arg1;
- (id)dataAreaBorderDxf;
- (void)setTotalsRowBorderDxf:(id)arg1;
- (id)totalsRowBorderDxf;
- (void)setHeaderRowBorderDxf:(id)arg1;
- (id)headerRowBorderDxf;
- (void)setDataAreaDxf:(id)arg1;
- (id)dataAreaDxf;
- (void)setTotalsRowDxf:(id)arg1;
- (id)totalsRowDxf;
- (void)setHeaderRowDxf:(id)arg1;
- (id)headerRowDxf;
- (void)setStyle:(id)arg1;
- (id)style;
- (id)initWithResources:(id)arg1;
- (id)description;
- (void)setTableBorderDxfIndex:(NSUInteger)arg1;
- (NSUInteger)tableBorderDxfIndex;
- (void)setDataAreaBorderDxfIndex:(NSUInteger)arg1;
- (NSUInteger)dataAreaBorderDxfIndex;
- (void)setTotalsRowBorderDxfIndex:(NSUInteger)arg1;
- (NSUInteger)totalsRowBorderDxfIndex;
- (void)setHeaderRowBorderDxfIndex:(NSUInteger)arg1;
- (NSUInteger)headerRowBorderDxfIndex;
- (void)setDataAreaDxfIndex:(NSUInteger)arg1;
- (NSUInteger)dataAreaDxfIndex;
- (void)setTotalsRowDxfIndex:(NSUInteger)arg1;
- (NSUInteger)totalsRowDxfIndex;
- (void)setHeaderRowDxfIndex:(NSUInteger)arg1;
- (NSUInteger)headerRowDxfIndex;
- (void)setStyleIndex:(NSUInteger)arg1;
- (NSUInteger)styleIndex;

@end
