//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/CHQueryDelegate-Protocol.h>

@class CHTitleQuery, NSString, PKDrawing;
@protocol PKTitleQueryDelegate;

@interface PKTitleQuery : NSObject <CHQueryDelegate>
{
    id <PKTitleQueryDelegate> _delegate;
    CHTitleQuery *_titleQuery;
    PKDrawing *_drawing;
}

@property(retain, nonatomic) PKDrawing *drawing; // @synthesize drawing=_drawing;
@property(retain, nonatomic) CHTitleQuery *titleQuery; // @synthesize titleQuery=_titleQuery;
@property(nonatomic) __weak id <PKTitleQueryDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)queryDidUpdateResult:(id)arg1;
@property(readonly, copy, nonatomic) NSString *transcribedTitle;
- (void)dealloc;
- (void)pause;
- (void)start;
- (id)initWithDrawing:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

