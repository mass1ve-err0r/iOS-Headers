//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PSISynonymRecord : NSObject
{
    short _category;
    NSString *_synonym;
}

@property(nonatomic) short category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *synonym; // @synthesize synonym=_synonym;
- (void)dealloc;
- (id)initWithSynonym:(id)arg1 category:(short)arg2;

@end
