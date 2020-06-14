//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface OADTableStyleCollection : NSObject
{
    NSMutableArray *_styles;
    NSMutableDictionary *_styleMap;
    NSString *_defaultTableStyleId;
}

@property(copy, nonatomic) NSString *defaultTableStyleId; // @synthesize defaultTableStyleId=_defaultTableStyleId;
- (id)tableStyleWithId:(id)arg1;
- (id)tableStyles;
- (void)addTableStyle:(id)arg1;
- (void)dealloc;
- (id)init;

@end

