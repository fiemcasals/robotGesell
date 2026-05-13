document.addEventListener('DOMContentLoaded', () => {
    // Reveal animations on scroll
    const observerOptions = {
        threshold: 0.1
    };

    const observer = new IntersectionObserver((entries) => {
        entries.forEach(entry => {
            if (entry.isIntersecting) {
                entry.target.style.opacity = '1';
                entry.target.style.transform = 'translateY(0)';
                observer.unobserve(entry.target);
            }
        });
    }, observerOptions);

    document.querySelectorAll('.animate').forEach(el => {
        el.style.opacity = '0';
        el.style.transform = 'translateY(20px)';
        el.style.transition = 'all 0.8s cubic-bezier(0.16, 1, 0.3, 1)';
        observer.observe(el);
    });

    // Add copy button to code blocks
    document.querySelectorAll('pre').forEach(pre => {
        const button = document.createElement('button');
        button.innerText = 'Copiar';
        button.className = 'copy-button';
        
        button.style.position = 'absolute';
        button.style.right = '12px';
        button.style.top = '12px';
        button.style.background = 'rgba(255, 255, 255, 0.1)';
        button.style.border = 'none';
        button.style.color = '#fff';
        button.style.padding = '4px 8px';
        button.style.borderRadius = '4px';
        button.style.cursor = 'pointer';
        button.style.fontSize = '12px';
        button.style.backdropFilter = 'blur(4px)';

        pre.style.position = 'relative';
        pre.appendChild(button);

        button.addEventListener('click', () => {
            const code = pre.querySelector('code').innerText;
            navigator.clipboard.writeText(code).then(() => {
                button.innerText = '¡Copiado!';
                button.style.background = '#3b82f6';
                setTimeout(() => {
                    button.innerText = 'Copiar';
                    button.style.background = 'rgba(255, 255, 255, 0.1)';
                }, 2000);
            });
        });
    });
});
