//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CAStateElement.h>

@class NSString;

@interface CAStateAddElement : CAStateElement
{
    NSString *_keyPath;
    id _object;
    id _beforeObject;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) id beforeObject; // @synthesize beforeObject=_beforeObject;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(copy, nonatomic) NSString *keyPath; // @synthesize keyPath=_keyPath;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)CAMLTypeForKey:(id)arg1;
- (void)encodeWithCAMLWriter:(id)arg1;
- (void)CAMLParser:(id)arg1 setValue:(id)arg2 forKey:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)foreachLayer:(CDUnknownBlockType)arg1;
- (void)apply:(id)arg1;
- (_Bool)matches:(id)arg1;

@end

