//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;
@protocol UIItemProviderWriting;

@interface _MKPlaceCardDraggableContent : NSObject
{
    _Bool _header;
    int _analyticsTarget;
    UIView *_view;
    id <UIItemProviderWriting> _draggableContent;
}

@property(nonatomic) int analyticsTarget; // @synthesize analyticsTarget=_analyticsTarget;
@property(nonatomic, getter=isHeader) _Bool header; // @synthesize header=_header;
@property(retain, nonatomic) id <UIItemProviderWriting> draggableContent; // @synthesize draggableContent=_draggableContent;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;

@end

