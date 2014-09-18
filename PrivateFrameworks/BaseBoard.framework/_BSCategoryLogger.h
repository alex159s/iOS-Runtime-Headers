/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@class NSString;

@interface _BSCategoryLogger : NSObject <BSLogging> {
    NSString *_category;
    NSString *_name;
}

@property(retain) NSString * category;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(retain) NSString * name;
@property(readonly) Class superclass;

- (id)category;
- (void)dealloc;
- (id)initWithLoggerName:(id)arg1 category:(id)arg2;
- (void)logWithFormat:(id)arg1 arguments:(char *)arg2;
- (void)logWithFormat:(id)arg1;
- (id)name;
- (void)setCategory:(id)arg1;
- (void)setName:(id)arg1;

@end