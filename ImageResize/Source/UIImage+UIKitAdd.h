//
//  UIImage+UIKitAdd.h
//  ImageResize
//
//  Created by kuroky on 2019/5/22.
//  Copyright © 2019 Emucoo. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (UIKitAdd)

+ (UIImage *)uikit_resiImage:(NSURL *)url forSize:(CGSize)size;

@end

NS_ASSUME_NONNULL_END
