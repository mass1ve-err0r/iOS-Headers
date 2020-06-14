//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PDFKit/NSCoding-Protocol.h>
#import <PDFKit/NSCopying-Protocol.h>

@class NSArray, NSDictionary, PDFBorderPrivateVars;

@interface PDFBorder : NSObject <NSCopying, NSCoding>
{
    PDFBorderPrivateVars *_private;
}

- (void).cxx_destruct;
- (void)setVerticalCornerRadius:(double)arg1;
- (double)verticalCornerRadius;
- (void)setHorizontalCornerRadius:(double)arg1;
- (void)updateCornerBorderStyle;
- (double)horizontalCornerRadius;
- (_Bool)setBorderCharacteristicsFromArray:(struct CGPDFArray *)arg1;
- (void)setDashFromArray:(struct CGPDFArray *)arg1;
- (void)setStyleFromDictionary:(struct CGPDFDictionary *)arg1;
- (void)drawInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (unsigned int)dashCountRaw;
- (void)setDashPatternRaw;
- (const double *)dashPatternRaw;
- (_Bool)isRectangular;
- (void)setAnnotation:(id)arg1;
- (id)createDictionaryRef;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1 forPage:(id)arg2;
@property(readonly, copy, nonatomic) NSDictionary *borderKeyValues;
- (void)drawInRect:(struct CGRect)arg1;
@property(copy, nonatomic) NSArray *dashPattern;
@property(nonatomic) double lineWidth;
@property(nonatomic) long long style;
- (id)description;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

