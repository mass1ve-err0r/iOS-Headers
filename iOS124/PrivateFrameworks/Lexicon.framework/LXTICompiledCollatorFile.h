//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface LXTICompiledCollatorFile : NSObject
{
    int m_descriptor;
    char *m_mappedFile;
    long long m_length;
    NSString *m_path;
}

+ (struct UCollator *)createCollatorWithType:(int)arg1;
+ (id)sharedCollatorFile;
- (struct UCollator *)createCollatorWithType:(int)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1 error:(unsigned int *)arg2;

@end

