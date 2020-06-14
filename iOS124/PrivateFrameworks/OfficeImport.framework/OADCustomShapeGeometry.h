//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OADShapeGeometry.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADCustomShapeGeometry : OADShapeGeometry
{
    CsRect_0aefebc6 *mGeometryCoordSpace;
    CsPoint_c846a6ec *mLimo;
    NSMutableArray *mFormulas;
    NSMutableArray *mTextBodyRects;
    NSMutableArray *mPaths;
}

- (id)description;
- (void)addPath:(id)arg1;
- (id)pathAtIndex:(unsigned long long)arg1;
- (unsigned long long)pathCount;
- (void)addTextBodyRect:(id)arg1;
- (id)textBodyRectAtIndex:(unsigned long long)arg1;
- (unsigned long long)textBodyRectCount;
- (void)addFormula:(id)arg1;
- (id)formulaAtIndex:(unsigned long long)arg1;
- (unsigned long long)formulaCount;
- (void)setLimo:(CsPoint_c846a6ec)arg1;
- (CsPoint_c846a6ec)limo;
- (void)setGeometryCoordSpace:(CsRect_0aefebc6)arg1;
- (CsRect_0aefebc6)geometryCoordSpace;
- (id)equivalentCustomGeometry;
- (int)type;
- (void)dealloc;
- (id)init;

@end

