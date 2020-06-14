//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/NSItemProviderReading-Protocol.h>
#import <PencilKit/NSItemProviderWriting-Protocol.h>

@class NSArray, NSMutableOrderedSet, NSString, PKDrawing, PKStroke, UIImage;

@interface PKStrokeSelection : NSObject <NSItemProviderReading, NSItemProviderWriting>
{
    NSMutableOrderedSet *_strokes;
    PKStroke *_lassoStroke;
    UIImage *_strokeImage;
    PKDrawing *_drawing;
}

+ (id)strokeSelectionFromData:(id)arg1;
+ (id)writableTypeIdentifiersForItemProvider;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)readableTypeIdentifiersForItemProvider;
@property(readonly, nonatomic) PKDrawing *drawing; // @synthesize drawing=_drawing;
@property(retain, nonatomic) UIImage *strokeImage; // @synthesize strokeImage=_strokeImage;
@property(readonly, nonatomic) PKStroke *lassoStroke; // @synthesize lassoStroke=_lassoStroke;
@property(readonly, nonatomic) NSMutableOrderedSet *strokes; // @synthesize strokes=_strokes;
- (void).cxx_destruct;
- (id)strokeDataForSelection;
- (id)imageDataForSelection;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct CGRect)boundsWithoutLasso;
- (struct CGRect)bounds;
- (id)initWithStrokes:(id)arg1 lassoStroke:(id)arg2 drawing:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

@end

