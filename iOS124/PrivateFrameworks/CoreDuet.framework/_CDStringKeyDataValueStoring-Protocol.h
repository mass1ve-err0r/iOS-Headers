//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSData, NSString;

@protocol _CDStringKeyDataValueStoring
- (NSArray *)allKeys;
- (_Bool)removeDataForKeys:(NSArray *)arg1;
- (_Bool)removeDataForKey:(NSString *)arg1;
- (_Bool)setData:(NSData *)arg1 forKey:(NSString *)arg2 completionBlock:(void (^)(_Bool, NSError *))arg3;
- (_Bool)setData:(NSData *)arg1 forKey:(NSString *)arg2;
- (NSData *)dataForKey:(NSString *)arg1;
@end

