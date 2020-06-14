//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIResponder.h>

#import <SpriteKit/NSCopying-Protocol.h>
#import <SpriteKit/NSSecureCoding-Protocol.h>
#import <SpriteKit/UIFocusItem-Protocol.h>

@class GKEntity, MISSING_TYPE, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, SKPhysicsBody, SKReachConstraints, SKScene, UIView;
@protocol UIFocusEnvironment, UIFocusItemContainer;

@interface SKNode : UIResponder <NSCopying, NSSecureCoding, UIFocusItem>
{
    struct SKCNode *_skcNode;
    SKNode *_parent;
    NSMutableArray *_children;
    NSMutableArray *_actions;
    NSMutableDictionary *_keyedActions;
    NSMutableDictionary *_keyedSubSprites;
    NSMutableDictionary *_info;
    NSMutableDictionary *_attributeValues;
    NSString *_name;
    NSMutableDictionary *_userData;
    NSArray *_constraints;
    unsigned int _version;
    _Bool _userInteractionEnabled;
    _Bool _performFullCapture;
    SKReachConstraints *_reachConstraints;
    long long _focusBehavior;
    GKEntity *_entity;
}

+ (id)debugHierarchyValueForPropertyWithName:(id)arg1 onObject:(id)arg2 outOptions:(id *)arg3 outError:(id *)arg4;
+ (id)debugHierarchyPropertyDescriptions;
+ (id)debugHierarchyObjectsInGroupWithID:(id)arg1 onObject:(id)arg2 outOptions:(id *)arg3;
+ (id)debugHierarchyChildGroupingID;
+ (id)nodeWithFileNamed:(id)arg1 securelyWithClasses:(id)arg2 andError:(id *)arg3;
+ (id)nodeWithFileNamed:(id)arg1;
+ (id)node;
+ (_Bool)supportsSecureCoding;
+ (id)nodeFromCaptureData:(id)arg1;
@property _Bool performFullCapture; // @synthesize performFullCapture=_performFullCapture;
@property(nonatomic) __weak GKEntity *entity; // @synthesize entity=_entity;
@property(retain, nonatomic) NSMutableDictionary *userData; // @synthesize userData=_userData;
@property(nonatomic) long long focusBehavior; // @synthesize focusBehavior=_focusBehavior;
@property(copy, nonatomic) SKReachConstraints *reachConstraints; // @synthesize reachConstraints=_reachConstraints;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (_Bool)_isEligibleForFocusInteraction;
- (_Bool)_isEligibleForFocus;
- (_Bool)_isEffectivelyHidden;
@property(readonly, nonatomic) __weak id <UIFocusEnvironment> parentFocusEnvironment;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
@property(readonly, nonatomic) _Bool canBecomeFocused;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)updateFocusIfNeeded;
- (void)setNeedsFocusUpdate;
- (void)setValue:(id)arg1 forAttributeNamed:(id)arg2;
- (id)valueForAttributeNamed:(id)arg1;
@property(copy, nonatomic) NSDictionary *attributeValues;
@property(readonly, nonatomic) CDStruct_14d5dc5e globalAccumulatedBoundingVerts;
@property(readonly, nonatomic) CDStruct_14d5dc5e globalBoundingVerts;
- (void)dealloc;
- (_Bool)hasUniformAlphaAndIsVisible;
- (_Bool)intersectsNode:(id)arg1;
- (struct CGSize)size;
- (void)setSize:(struct CGSize)arg1;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toNode:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromNode:(id)arg2;
- (struct CGPoint)convertPointToParent:(struct CGPoint)arg1;
- (struct CGPoint)convertPointFromParent:(struct CGPoint)arg1;
- (id)nodesAtPoint:(struct CGPoint)arg1;
- (id)nodeAtPoint:(struct CGPoint)arg1;
- (id)nodeAtPoint:(struct CGPoint)arg1 recursive:(_Bool)arg2;
- (_Bool)containsPoint:(struct CGPoint)arg1 withRadius:(double)arg2;
- (_Bool)containsPoint:(struct CGPoint)arg1;
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;
@property(nonatomic, getter=isPaused) _Bool paused;
@property(nonatomic, getter=isHidden) _Bool hidden;
- (void)setScale:(double)arg1;
@property(nonatomic) double yScale;
@property(nonatomic) double xScale;
@property(nonatomic) double yRotation;
@property(nonatomic) double xRotation;
@property(nonatomic) double zRotation;
@property(nonatomic) double zPosition;
- (struct CGRect)calculateAccumulatedFrame;
@property(nonatomic) struct CGPoint position;
- (id)physicsField;
@property(retain, nonatomic) SKPhysicsBody *physicsBody;
@property(readonly, copy) NSString *description;
- (_Bool)needsUpdate;
- (_Bool)hasActions;
- (id)containingView;
- (void)removeAllActions;
- (void)removeActionForKey:(id)arg1;
- (id)actionForKey:(id)arg1;
- (void)runAction:(id)arg1 withKey:(id)arg2;
@property(nonatomic) double alpha;
@property(nonatomic) double speed;
- (void)runAction:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_runAction:(id)arg1;
- (void)runAction:(id)arg1;
- (void)_descendantsWithPredicate:(CDUnknownBlockType)arg1 toMutableArray:(id)arg2;
- (id)_descendantsWithPredicate:(CDUnknownBlockType)arg1;
- (void)_descendantsToMutableArray:(id)arg1;
- (id)_descendants;
@property(readonly, nonatomic) NSArray *children;
- (_Bool)hasChildren;
- (void)_processSearchTokens:(vector_408ca79d)arg1 visited:(set_3449d313 *)arg2 usingBlock:(CDUnknownBlockType)arg3 stopPointer:(_Bool *)arg4;
- (void)_enumerateChildNodesWithName:(id)arg1 usingBlock:(CDUnknownBlockType)arg2 stopPointer:(_Bool *)arg3;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)enumerateChildNodesWithName:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)childNodeWithName:(id)arg1;
- (void)addChild:(id)arg1 withKey:(id)arg2;
- (void)_flippedChangedFrom:(_Bool)arg1 to:(_Bool)arg2;
- (void)_scaleFactorChangedFrom:(float)arg1 to:(float)arg2;
@property(copy, nonatomic) NSArray *constraints;
- (void)_performCleanup;
- (void)removeAllChildren;
- (void)removeChildrenInArray:(id)arg1;
- (void)removeChild:(id)arg1;
- (void)removeChildAtIndex:(long long)arg1;
@property(readonly, nonatomic) struct CGRect frame;
- (void)insertChild:(id)arg1 atIndex:(long long)arg2;
- (void)addChild:(id)arg1;
- (_Bool)inParentHierarchy:(id)arg1;
@property(readonly, nonatomic) const struct CGPath *outline;
@property(readonly, nonatomic) SKNode *parent;
@property(readonly, nonatomic) SKScene *scene;
- (void)_update:(double)arg1;
- (void)moveToParent:(id)arg1;
- (void)removeFromParent;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copy;
- (void)encodeWithCoder:(id)arg1;
- (void)_initAccessibility;
- (id)initWithCoder:(id)arg1;
- (Class)swiftClassFromString:(id)arg1 moduleName:(id)arg2;
- (id)init;
- (void)_didMakeBackingNode;
@property(readonly, nonatomic) struct SKCNode *_backingNode;
- (struct SKCNode *)_makeBackingNode;
- (_Bool)isEqualToNode:(id)arg1;
@property(readonly, nonatomic) shared_ptr_11a7378b _aether;
- (void)_removeChild:(id)arg1;
- (void)_removeAction:(id)arg1;
- (id)createDebugHierarchyVisualRepresentation;
- (struct CGRect)_convertFrameToView:(id)arg1;
- (id)_copyImageData;
@property(readonly, nonatomic) NSArray *_allActions;
- (_Bool)_pathFromPhysicsBodyToPoints:(MISSING_TYPE ***)arg1 outSize:(unsigned long long *)arg2;
- (id)_subnodeFromIndexPath:(id)arg1;
- (id)allIntersectionsWithNode:(id)arg1 useAlphaTest:(_Bool)arg2;
- (_Bool)intersectsNode:(id)arg1 useAlphaTest:(_Bool)arg2;
@property(readonly, nonatomic) struct CGSize _size;
@property(nonatomic) struct CGPoint _anchorPoint;
@property(readonly, nonatomic) struct CGSize _untransformedSize;
@property(readonly, nonatomic) struct CGRect _untransformedBounds;
@property(nonatomic) _Bool _showBounds;
@property(retain, nonatomic) NSMutableDictionary *_info;
- (id)childrenInRect:(struct CGRect)arg1;
- (void)updatePhysicsPositionAndScaleFromSprite;
- (void)_getBasePhysicsScale:(float *)arg1 yScale:(float *)arg2;
- (void)_getWorldTransform:(float *)arg1 positionY:(float *)arg2 rotation:(float *)arg3 xScale:(float *)arg4 yScale:(float *)arg5;
- (void)_debugPrint:(int)arg1 mask:(unsigned long long)arg2;
- (void)_debugPrint:(int)arg1;
- (void)debugPrint;
- (id)archiveToFile:(id)arg1;
- (id)createFullCaptureData;
- (void)setParent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) id <UIFocusItemContainer> focusItemContainer;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak UIView *preferredFocusedView;
@property(readonly) Class superclass;

@end

