//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EspressoDataFrameMappedFile : NSObject
{
    int file_id;
    unsigned long long length;
    NSString *_path;
    char *_basePtr;
}

@property char *basePtr; // @synthesize basePtr=_basePtr;
@property NSString *path; // @synthesize path=_path;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

