//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebAccessibilityTextMarker : NSObject
{
    struct AXObjectCache *_cache;
    struct TextMarkerData _textMarkerData;
}

+ (id)startOrEndTextMarkerForRange:(RefPtr_033e7b31)arg1 isStart:(_Bool)arg2 cache:(struct AXObjectCache *)arg3;
+ (id)textMarkerWithCharacterOffset:(struct CharacterOffset *)arg1 cache:(struct AXObjectCache *)arg2;
+ (id)textMarkerWithVisiblePosition:(struct VisiblePosition *)arg1 cache:(struct AXObjectCache *)arg2;
- (id).cxx_construct;
- (id)description;
- (struct AccessibilityObject *)accessibilityObject;
- (_Bool)isIgnored;
- (struct CharacterOffset)characterOffset;
- (struct VisiblePosition)visiblePosition;
- (id)dataRepresentation;
- (id)initWithData:(id)arg1 accessibilityObject:(struct WebAccessibilityObjectWrapper *)arg2;
- (id)initWithData:(id)arg1 cache:(struct AXObjectCache *)arg2;
- (id)initWithTextMarker:(struct TextMarkerData *)arg1 cache:(struct AXObjectCache *)arg2;

@end

