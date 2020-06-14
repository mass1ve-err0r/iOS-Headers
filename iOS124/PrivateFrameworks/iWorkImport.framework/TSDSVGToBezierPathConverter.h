//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSXMLParserDelegate-Protocol.h>

@class NSString, TSUBezierPath;

__attribute__((visibility("hidden")))
@interface TSDSVGToBezierPathConverter : NSObject <NSXMLParserDelegate>
{
    TSUBezierPath *mFileBezierPath;
    NSString *mHiddenOnTag;
    unsigned long long mHiddenOnTagNestedCount;
    struct CGAffineTransform mGroupedAffineTransform;
    unsigned long long mGroupedAffineTransformNestedCount;
    _Bool mViewBoxFound;
    struct CGRect mViewBox;
    _Bool mUsesEvenOdd;
}

+ (struct CGAffineTransform)transformFromSVGTransformAttributeString:(id)arg1;
+ (struct CGPath *)newPathFromSVGPolygonString:(id)arg1;
+ (struct CGPath *)newPathFromSVGPolylineString:(id)arg1;
+ (struct CGPath *)newPathFromSVGPathString:(id)arg1 shouldClosePathAtEnd:(_Bool)arg2;
+ (struct CGPath *)newPathFromSVGPathString:(id)arg1;
- (void).cxx_destruct;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (id)bezierPathFromSVGData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

