/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSPData, TSUFlushingManager;

@interface TSDImageProvider : NSObject {
    TSUFlushingManager *mFlushingManager;
    TSPData *mImageData;
    int mInterest;
    int mLoadState;
    int mOwnerCount;
    int mRetainCount;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)addInterest;
- (void)addOwner;
- (void)dealloc;
- (struct CGSize { double x1; double x2; })dpiAdjustedNaturalSize;
- (void)drawImageInContext:(struct CGContext { }*)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)flush;
- (bool)hasFlushableContent;
- (void)i_commonInit;
- (id)imageData;
- (id)initWithImageData:(id)arg1;
- (int)interest;
- (bool)isError;
- (bool)isValid;
- (struct CGSize { double x1; double x2; })naturalSize;
- (void)ownerAccess;
- (oneway void)release;
- (void)removeInterest;
- (void)removeOwner;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setFlushingManager:(id)arg1;

@end