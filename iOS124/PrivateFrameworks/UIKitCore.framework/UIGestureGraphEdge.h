//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIGestureGraphElement.h>

@class UIGestureGraphNode;

__attribute__((visibility("hidden")))
@interface UIGestureGraphEdge : UIGestureGraphElement
{
    _Bool _directed;
    UIGestureGraphNode *_sourceNode;
    UIGestureGraphNode *_targetNode;
}

@property(readonly, nonatomic, getter=isDirected) _Bool directed; // @synthesize directed=_directed;
@property(readonly, nonatomic) UIGestureGraphNode *targetNode; // @synthesize targetNode=_targetNode;
@property(readonly, nonatomic) UIGestureGraphNode *sourceNode; // @synthesize sourceNode=_sourceNode;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic, getter=isLoop) _Bool loop;
- (id)commonNode:(id)arg1;
- (id)oppositeNode:(id)arg1;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 directed:(_Bool)arg4;

@end

