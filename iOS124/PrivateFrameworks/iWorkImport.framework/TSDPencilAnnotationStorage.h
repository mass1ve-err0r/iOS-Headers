//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSKPencilAnnotationStorage-Protocol.h>

@class NSArray, NSData, NSDate, NSString, PKDrawing, TSKPKDrawing, TSPData, TSUColor, TSUImage;
@protocol TSKPencilAnnotationStorage;

__attribute__((visibility("hidden")))
@interface TSDPencilAnnotationStorage : TSPObject <TSKPencilAnnotationStorage>
{
    struct CGPath *_path;
    TSPData *_rasterizedImageTSPData;
    TSUColor *_penColor;
    long long _toolType;
    NSDate *_creationDate;
    long long _compoundAnnotationType;
    long long _attachedLocation;
    long long _attachedType;
    double _percentOfPAContainedInParentRep;
    unsigned long long _textBaselinesTouchedCount;
    unsigned long long _visibleStrokesCount;
    TSKPKDrawing *_drawing;
    PKDrawing *_drawingForTextRecognition;
    TSPData *_encodedDrawingTSPData;
    NSArray *_subStorages;
    id <TSKPencilAnnotationStorage> _parentStorage;
    double _pencilAnnotationDrawingScale;
    struct CGSize _rasterizedImageSize;
    struct CGPoint _markupOffset;
    struct CGSize _originalAttachedSize;
    struct CGRect _unscaledBoundsOfStrokes;
}

@property(nonatomic) double pencilAnnotationDrawingScale; // @synthesize pencilAnnotationDrawingScale=_pencilAnnotationDrawingScale;
@property(nonatomic) __weak id <TSKPencilAnnotationStorage> parentStorage; // @synthesize parentStorage=_parentStorage;
@property(retain, nonatomic) NSArray *subStorages; // @synthesize subStorages=_subStorages;
@property(readonly, nonatomic) TSPData *encodedDrawingTSPData; // @synthesize encodedDrawingTSPData=_encodedDrawingTSPData;
@property(retain, nonatomic) PKDrawing *drawingForTextRecognition; // @synthesize drawingForTextRecognition=_drawingForTextRecognition;
@property(retain, nonatomic) TSKPKDrawing *drawing; // @synthesize drawing=_drawing;
@property(nonatomic) struct CGRect unscaledBoundsOfStrokes; // @synthesize unscaledBoundsOfStrokes=_unscaledBoundsOfStrokes;
@property(nonatomic) unsigned long long visibleStrokesCount; // @synthesize visibleStrokesCount=_visibleStrokesCount;
@property(nonatomic) unsigned long long textBaselinesTouchedCount; // @synthesize textBaselinesTouchedCount=_textBaselinesTouchedCount;
@property(nonatomic) double percentOfPAContainedInParentRep; // @synthesize percentOfPAContainedInParentRep=_percentOfPAContainedInParentRep;
@property(nonatomic) struct CGSize originalAttachedSize; // @synthesize originalAttachedSize=_originalAttachedSize;
@property(nonatomic) struct CGPoint markupOffset; // @synthesize markupOffset=_markupOffset;
@property(nonatomic) long long attachedType; // @synthesize attachedType=_attachedType;
@property(nonatomic) long long attachedLocation; // @synthesize attachedLocation=_attachedLocation;
@property(nonatomic) long long compoundAnnotationType; // @synthesize compoundAnnotationType=_compoundAnnotationType;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) long long toolType; // @synthesize toolType=_toolType;
@property(readonly, nonatomic) TSUColor *penColor; // @synthesize penColor=_penColor;
@property(readonly, nonatomic) TSPData *rasterizedImageTSPData; // @synthesize rasterizedImageTSPData=_rasterizedImageTSPData;
@property(readonly, nonatomic) struct CGSize rasterizedImageSize; // @synthesize rasterizedImageSize=_rasterizedImageSize;
@property(readonly, nonatomic) struct CGPath *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (struct CGSize)convertStrokeToUnscaledCanvasSize:(struct CGSize)arg1;
- (struct CGSize)convertUnscaledCanvasToStrokeSize:(struct CGSize)arg1;
- (struct CGPoint)convertStrokeToUnscaledCanvasPoint:(struct CGPoint)arg1;
- (struct CGPoint)convertUnscaledCanvasToStrokePoint:(struct CGPoint)arg1;
- (struct CGRect)convertStrokeRectToUnscaledCanvas:(struct CGRect)arg1;
- (struct CGRect)convertUnscaledCanvasToStrokeRect:(struct CGRect)arg1;
@property(readonly, nonatomic) _Bool isCalloutParentStorage;
@property(readonly, nonatomic) TSUImage *rasterizedImage;
@property(readonly, nonatomic) _Bool isStretchableParagraphAnnotation;
@property(readonly, nonatomic) _Bool isCalloutMarginAnnotation;
@property(readonly, nonatomic) _Bool isCalloutLine;
- (id)p_drawingFromLegacyEncodedData:(id)arg1 pencilAnnotationDrawingScale:(double)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct PencilAnnotationStorageArchive *)arg1 unarchiver:(id)arg2;
@property(readonly, nonatomic) _Bool needsTextRecognition;
- (void)initializeTextRecognition;
@property(readonly, nonatomic) struct CGPath *unscaledPath;
@property(readonly, nonatomic) _Bool shouldSplitAcrossAnchorRects;
@property(readonly, nonatomic) _Bool shouldResizeWithAnchor;
@property(readonly, nonatomic) NSData *encodedDrawing;
- (_Bool)p_isSubStorage;
@property(readonly, nonatomic) _Bool shouldShowAnchorRect;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 drawing:(id)arg2 markupOffset:(struct CGPoint)arg3 rasterizedImageTSPData:(id)arg4 attachedLocation:(long long)arg5 attachedType:(long long)arg6 encodedDrawing:(id)arg7 path:(struct CGPath *)arg8 unscaledBoundsOfStrokes:(struct CGRect)arg9 originalAttachedSize:(struct CGSize)arg10 percentOfPAContainedInParentRep:(double)arg11 textBaselinesTouchedCount:(unsigned long long)arg12 visibleStrokesCount:(unsigned long long)arg13 penColor:(id)arg14 toolType:(long long)arg15 compoundAnnotationType:(long long)arg16 subStorages:(id)arg17 creationDate:(id)arg18 pencilAnnotationDrawingScale:(double)arg19;
- (id)initFromSOSWithContext:(id)arg1 markupOffset:(struct CGPoint)arg2 rasterizedImageTSPData:(id)arg3 attachedLocation:(long long)arg4 attachedType:(long long)arg5 encodedDrawing:(id)arg6 path:(struct CGPath *)arg7 unscaledBoundsOfStrokes:(struct CGRect)arg8 originalAttachedSize:(struct CGSize)arg9 percentOfPAContainedInParentRep:(double)arg10 textBaselinesTouchedCount:(unsigned long long)arg11 visibleStrokesCount:(unsigned long long)arg12 penColor:(id)arg13 toolType:(long long)arg14 compoundAnnotationType:(long long)arg15 subStorages:(id)arg16 creationDate:(id)arg17 pencilAnnotationDrawingScale:(double)arg18;
- (id)initWithContext:(id)arg1 drawing:(id)arg2 markupOffset:(struct CGPoint)arg3 rasterizedImage:(id)arg4 attachedLocation:(long long)arg5 attachedType:(long long)arg6 path:(struct CGPath *)arg7 unscaledBoundsOfStrokes:(struct CGRect)arg8 originalAttachedSize:(struct CGSize)arg9 percentOfPAContainedInParentRep:(double)arg10 textBaselinesTouchedCount:(unsigned long long)arg11 visibleStrokesCount:(unsigned long long)arg12 penColor:(id)arg13 toolType:(long long)arg14 compoundAnnotationType:(long long)arg15 subStorages:(id)arg16 creationDate:(id)arg17 pencilAnnotationDrawingScale:(double)arg18;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

