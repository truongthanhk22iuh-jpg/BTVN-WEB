# BTVN 4

## 1. Sửa lỗi Layout (Box Model)

**Nguyên nhân:** `.input-field` và `.btn-submit` đang có `width: 100%` nhưng đồng thời còn có `padding` và `border`. Với `box-sizing: content-box` mặc định, chiều rộng thực tế lớn hơn 100%, khiến phần tử tràn khỏi vùng chứa.

**Cách sửa:** áp dụng quy tắc toàn cục:

```css
*,
*::before,
*::after {
  box-sizing: border-box;
}
```

Khi dùng `border-box`, chiều rộng khai báo đã bao gồm content + padding + border. Vì vậy input và button nằm gọn trong phần tử cha. Card cũng được đặt `width: 100%; max-width: 420px` để không tràn trên màn hình nhỏ.

## 2. Hai phiên bản Typography: px và rem

- `typography-px.css`: dùng đơn vị `px` cho cỡ chữ và khoảng cách.
- `typography-rem.css`: dùng đơn vị `rem`; đặt `html { font-size: 16px; }` nên `1rem = 16px` ở cấu hình mặc định.

| Giá trị | Bản px | Bản rem tương đương |
|---|---:|---:|
| Tiêu đề | 24px | 1.5rem |
| Nội dung phụ | 14px | 0.875rem |
| Chữ input | 15px | 0.9375rem |
| Chữ nút | 16px | 1rem |
| Padding card header ngang | 32px | 2rem |

**Khác biệt:**
- `px` là đơn vị tuyệt đối theo CSS pixel, dễ kiểm soát chính xác và dễ đối chiếu với bản thiết kế.
- `rem` phụ thuộc vào cỡ chữ gốc của phần tử `html`. Nếu người dùng hoặc trang thay đổi cỡ chữ gốc, các kích thước dùng `rem` thay đổi theo, thuận lợi hơn cho khả năng tiếp cận và điều chỉnh đồng bộ.
- Với `html { font-size: 16px; }`, các giá trị tương ứng trong hai bản cho kết quả hiển thị gần như giống nhau. Nếu thay đổi cỡ chữ gốc, bản `rem` sẽ co giãn còn bản `px` không tự co giãn theo cách đó.

**Cách xem bản px:** đổi đường dẫn stylesheet trong `index.html` từ `style.css` thành `typography-px.css`.
**Cách xem bản rem:** giữ nguyên `style.css` (hoặc đổi thành `typography-rem.css`).

